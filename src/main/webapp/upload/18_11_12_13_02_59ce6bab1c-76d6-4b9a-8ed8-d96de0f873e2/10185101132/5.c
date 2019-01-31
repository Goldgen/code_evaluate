#include <stdio.h>
#include <math.h>

const double cfP = 0.89;
const double cfF = 1.09;
const double cfC = 2.26;
const double cfM = 4.50;
const double cfO = 3.10;

double FfCntPrice(char cKind, int iNum, double fBoardF);
double FfToBoardFeet(double fWid, double fHgh, double fLng);
void FvPrintKind(char cKind);

int main(){
    char cKind;
    scanf("%c", &cKind);
    int iNum/*number of pieces*/ = 0;
    double fWid = 0.0,
          fHgh = 0.0,
          fLng = 0.0;
    double fBoardF = 0.0;
    double fPrice = 0.0;
    double fTCost = 0.0;//Total cost

    while(cKind != 'T'){
        scanf("%d %lf %lf %lf", &iNum, &fWid, &fHgh, &fLng);
        fBoardF = FfToBoardFeet(fWid, fHgh, fLng);
        fPrice = FfCntPrice(cKind, iNum, fBoardF);
        fTCost += fPrice;

        printf("%d %d*%d*%d ", iNum, (int)fWid, (int)fHgh, (int)fLng);
        FvPrintKind(cKind);
        printf(", Cost: $%.2f\n", floor(100*(fPrice+0.005))/100);

        getchar();
        scanf("%c", &cKind);
    }
    printf("Total cost: $%.2f", floor(100*(fTCost+0.005))/100);
    return 0;
}

double FfCntPrice(char cKind, int iNum, double fBoardF){
    double fPerBoard;
    switch (cKind){
        case 'P': fPerBoard = cfP;break;
        case 'F': fPerBoard = cfF;break;
        case 'C': fPerBoard = cfC;break;
        case 'M': fPerBoard = cfM;break;
        case 'O': fPerBoard = cfO;break;
        default: return -1.0;
    }
    return fPerBoard * iNum * fBoardF;
}

double FfToBoardFeet(double fWid/*inch*/
                  , double fHgh/*inch*/
                  , double fLng/*feet*/){
    return fWid / 12.0 * fHgh * fLng;
}

void FvPrintKind(char cKind){
    switch (cKind){
        case 'P': printf("Pine");
                  break;
        case 'F': printf("Fire");
                  break;
        case 'C': printf("Cedar");
                  break;
        case 'M': printf("Maple");
                  break;
        case 'O': printf("Oak");
                  break;
        default: break;
    }
}
