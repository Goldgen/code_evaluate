package com.ce.util;

import org.apache.poi.ss.usermodel.Cell;
import org.apache.poi.ss.usermodel.Row;
import org.apache.poi.ss.usermodel.Sheet;
import org.apache.poi.ss.usermodel.Workbook;
import org.apache.poi.xssf.usermodel.XSSFWorkbook;

import javax.servlet.http.HttpServletResponse;
import java.io.IOException;
import java.io.OutputStream;
import java.sql.Timestamp;
import java.util.*;

public class ExcelUtil {

    /**
     * @param response
     * @param fileName excel文件名
     * @param headList  表头list
     * @param dataList 表格数据
     */
    public static void exportXlsx(HttpServletResponse response, String fileName,
                                  List<String> headList, List<Map<String, Object>> dataList) {
        Workbook workbook = exportXlsx(fileName, headList, dataList);
        response.setContentType("application/binary;charset=ISO8859_1");
        OutputStream outputStream = null;
        try {
            outputStream = response.getOutputStream();
            String fn = new String(fileName.getBytes(), "ISO8859_1");
            response.setHeader("Content-disposition", "attachment; filename=" + fn + ".xlsx");
            workbook.write(outputStream);
        } catch (Exception e) {
            e.printStackTrace();
        } finally {
            if (outputStream != null) {
                try {
                    outputStream.close();
                } catch (IOException e) {
                    e.printStackTrace();
                }
            }
        }
    }

    /**
     * 导出数据
     *
     * @param headList
     * @param dataList
     */
    public static Workbook exportXlsx(String sheetName, List<String> headList, List<Map<String, Object>> dataList) {

        Workbook workbook = new XSSFWorkbook();

        Sheet sheet = workbook.createSheet(sheetName);


        int rowIndex = 0, columnIndex = 0;

        //表头
        Row row = sheet.createRow(rowIndex++);
        for (String head : headList) {
            Cell cell = row.createCell(columnIndex++);
            cell.setCellValue(head);
        }

        //内容
        if (dataList != null && !dataList.isEmpty()) {
            for (Map<String, Object> map : dataList) {
                row = sheet.createRow(rowIndex++);
                columnIndex = 0;
                for (String head : headList) {
                    Cell cell = row.createCell(columnIndex++);
                    setCellValue(cell, map.get(head));
                }
            }
        }

        return workbook;
    }

    private static void setCellValue(Cell cell, Object obj) {
        if (obj == null) {
            cell.setCellValue("0");
            return;
        }
        if (obj instanceof String) {
            cell.setCellValue((String) obj);
        } else if (obj instanceof Double) {
            cell.setCellValue((Double) obj);
        } else {
            cell.setCellValue(obj.toString());
        }
    }
}
