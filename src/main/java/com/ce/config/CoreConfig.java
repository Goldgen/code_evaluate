package com.ce.config;

import com.ce.controller.*;
import com.ce.interceptor.ActionExceptionIntoLogInterceptor;
import com.ce.interceptor.ServiceExceptionIntoLogInterceptor;
import com.ce.interceptor.SessionInterceptor;
import com.ce.task.CompileTask;
import com.jfinal.config.Constants;
import com.jfinal.config.Handlers;
import com.jfinal.config.Interceptors;
import com.jfinal.config.JFinalConfig;
import com.jfinal.config.Plugins;
import com.jfinal.config.Routes;
import com.jfinal.core.JFinal;
import com.jfinal.kit.PropKit;
import com.jfinal.plugin.activerecord.ActiveRecordPlugin;
import com.jfinal.plugin.cron4j.Cron4jPlugin;
import com.jfinal.plugin.druid.DruidPlugin;
import com.jfinal.template.Engine;

/**
 * Jfinal 核心配置
 */
public class CoreConfig extends JFinalConfig {

    /**
     * 运行此 main 方法可以启动项目，此main方法可以放置在任意的Class类定义中，不一定要放于此
     * <p>
     * 使用本方法启动过第一次以后，会在开发工具的 debug、run config 中自动生成
     * 一条启动配置，可对该自动生成的配置再添加额外的配置项，例如 VM argument 可配置为：
     * -XX:PermSize=64M -XX:MaxPermSize=256M
     */
    public static void main(String[] args) {
        /**
         * 特别注意：Eclipse 之下建议的启动方式
         */
        //JFinal.start("src/main/webapp", 80, "/", 5);

        /**
         * 特别注意：IDEA 之下建议的启动方式，仅比 eclipse 之下少了最后一个参数
         */
        System.out.println("数据库变动时请运行_JFinalTableGenerator中main方法重新生成");
        System.out.println("本地开发请注意设置database.properties中参数");
        JFinal.start("src/main/webapp", 8080, "/");
    }

    /**
     * 配置常量
     */
    public void configConstant(Constants me) {
        // 加载少量必要配置，随后可用PropKit.get(...)获取值
        PropKit.use("database.properties");
        me.setDevMode(PropKit.getBoolean("devMode", false));
        me.setError404View("/view/404.html");
    }

    /**
     * 配置路由
     */
    public void configRoute(Routes me) {
        //me.setBaseViewPath("/view");
        me.add("/", UserController.class, "/view");
        me.add("/info", BaseInfoController.class, "/view");
        me.add("/upload", UploadController.class, "/view");
        me.add("/review", ResultViewController.class, "/view");
        me.add("/question", QuestionController.class, "/view");
        me.add("/testDb", TestDbController.class, "/view");

    }

    public void configEngine(Engine me) {
//        me.addSharedFunction("/common/_layout.html");
//        me.addSharedFunction("/common/_paginate.html");
    }

    /**
     * 配置插件
     */
    public void configPlugin(Plugins me) {
        // 配置 druid 数据库连接池插件
        DruidPlugin firstDruidPlugin = new DruidPlugin(PropKit.get("first.url"), PropKit.get("first.user"), PropKit.get("first.password").trim());
        firstDruidPlugin.setInitialSize(PropKit.getInt("initialSize"));
        firstDruidPlugin.setMinIdle(PropKit.getInt("minIdle"));
        firstDruidPlugin.setMaxActive(PropKit.getInt("maxActive"));
        firstDruidPlugin.setMaxWait(PropKit.getLong("maxWait"));
        firstDruidPlugin.setTimeBetweenConnectErrorMillis(PropKit.getLong("timeBetweenEvictionRunsMillis"));
        firstDruidPlugin.setMinEvictableIdleTimeMillis(PropKit.getLong("minEvictableIdleTimeMillis"));
        firstDruidPlugin.setValidationQuery(PropKit.get("validationQuery"));
        firstDruidPlugin.setTestWhileIdle(PropKit.getBoolean("testWhileIdle"));
        firstDruidPlugin.setTestOnBorrow(PropKit.getBoolean("testOnBorrow"));
        firstDruidPlugin.setTestOnReturn(PropKit.getBoolean("testOnReturn"));
        firstDruidPlugin.setFilters(PropKit.get("filters"));
        me.add(firstDruidPlugin);
        // 配置ActiveRecord插件
        ActiveRecordPlugin firstArp = new ActiveRecordPlugin("first", firstDruidPlugin);
        // 所有映射在 MappingKit 中自动化搞定
        com.ce.model.first._MappingKit.mapping(firstArp);
        me.add(firstArp);

        DruidPlugin secondDruidPlugin = new DruidPlugin(PropKit.get("second.url"), PropKit.get("second.user"), PropKit.get("second.password").trim());
        secondDruidPlugin.setInitialSize(PropKit.getInt("initialSize"));
        secondDruidPlugin.setMinIdle(PropKit.getInt("minIdle"));
        secondDruidPlugin.setMaxActive(PropKit.getInt("maxActive"));
        secondDruidPlugin.setMaxWait(PropKit.getLong("maxWait"));
        secondDruidPlugin.setTimeBetweenConnectErrorMillis(PropKit.getLong("timeBetweenEvictionRunsMillis"));
        secondDruidPlugin.setMinEvictableIdleTimeMillis(PropKit.getLong("minEvictableIdleTimeMillis"));
        secondDruidPlugin.setValidationQuery(PropKit.get("validationQuery"));
        secondDruidPlugin.setTestWhileIdle(PropKit.getBoolean("testWhileIdle"));
        secondDruidPlugin.setTestOnBorrow(PropKit.getBoolean("testOnBorrow"));
        secondDruidPlugin.setTestOnReturn(PropKit.getBoolean("testOnReturn"));
        secondDruidPlugin.setFilters(PropKit.get("filters"));
        me.add(secondDruidPlugin);
        // 配置ActiveRecord插件
        ActiveRecordPlugin secondArp = new ActiveRecordPlugin("second", secondDruidPlugin);
        // 所有映射在 MappingKit 中自动化搞定
        com.ce.model.second._MappingKit.mapping(secondArp);
        me.add(secondArp);

        Cron4jPlugin cp = new Cron4jPlugin();
        cp.addTask("*/1 * * * *", new CompileTask());
        me.add(cp);

    }

    public static DruidPlugin createFirstDruidPlugin() {
        return new DruidPlugin(PropKit.get("first.url"), PropKit.get("first.user"), PropKit.get("first.password").trim());
    }

    public static DruidPlugin createSecondDruidPlugin() {
        return new DruidPlugin(PropKit.get("second.url"), PropKit.get("second.user"), PropKit.get("second.password").trim());
    }

    /**
     * 配置全局拦截器
     */
    public void configInterceptor(Interceptors me) {
        me.addGlobalActionInterceptor(new SessionInterceptor());
        me.addGlobalActionInterceptor(new ActionExceptionIntoLogInterceptor());
        me.addGlobalServiceInterceptor(new ServiceExceptionIntoLogInterceptor());
    }

    /**
     * 配置处理器
     */
    public void configHandler(Handlers me) {

    }
}
