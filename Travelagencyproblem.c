
#include<stdio.h>
#include<string.h>

struct Drivers
{
    char Name[34];
    int DrivingNo;
    char Route[53];
    int kms;
};
int main()
{
    struct Drivers D1,D2,D3;
    D1.DrivingNo=12;
    D2.DrivingNo=13;
    D3.DrivingNo=14;
    D1.kms=123;
    D2.kms=213;
    D3.kms=23;
// ALL INFORMATION OF EACH DRIVERS IN THE TRAVEL AGENCY
    printf(" \n INFORMATION OF 1st Driver \n");
    strcpy(D1.Name,"JOHN CENA");
    printf("1st Driver Name is %s\n",D1.Name);
    printf("1st Driver licence N0. is %d\n",D1.DrivingNo);
    strcpy(D1.Route,"kolhapur");
    printf("1st Driver Travelling Route is %s\n",D1.Route);
    printf("1st Driver Travel the distance is %d kms\n",D1.kms);


    printf(" \n INFORMATION OF 2nd Driver \n");
    strcpy(D2.Name,"DEAN AMBROSE");
    printf("2nd Driver Name is %s\n",D2.Name);
    printf("2nd Driver licence N0. is %d\n",D2.DrivingNo);
    strcpy(D2.Route,"jath");
    printf("2nd Driver Travling Route is %s\n",D2.Route);
    printf("2nd Driver Travel the distance is %d kms\n",D2.kms);


    printf(" \n INFORMATION OF 3rd Driver \n");
    strcpy(D3.Name,"ROMEN REINGS");
    printf("3rd Driver Name is %s\n",D3.Name);
    printf("3rd Driver licence N0. is %d\n",D3.DrivingNo);
    strcpy(D3.Route,"sangli");
    printf("3rd Driver Travling Route is %s\n",D3.Route);
    printf("3rd Driver Travel the distance is %d kms\n",D3.kms);
    return 0;

}
