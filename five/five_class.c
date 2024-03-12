
//===========================直接求数组和===========================
// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//     float a[4] = {1.0,2.0,3.0,4.0};
//     float sum = 0;
//     for(int index = 0;index<4;index++)
//     {
//         sum = sum + a[index];
//     }
//     printf("%f",sum);
//     system("pause");
//     return 0;
// }
//=============================指针求数组和========================
// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//     float a[5] = {1.0,2.0,3.0,4.0,5.0};
//     float sum = 0;
//     for(int index = 0;index<4;index++)
//     {
//         sum = sum + *(a+index);
//     }
//     printf("%f",sum);
//     system("pause");
//     return 0;
// }
//=======================================================================
// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//     float a[5] = {1.0,2.0,3.0,4.0,5.0};
//     float sum = 0;
//     for(float *startP = a; startP<=a+3; startP = startP+1)
//     {
//         sum = sum + *startP;
//     }
//     printf("%f",sum);
//     system("pause");
//     return 0;
// }
// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//     float a[5] = {1.0,2.0,3.0,4.0,5.0};
//     float *p = a;
//     printf("%p\n",a);
//     printf("%p\n",p);
//     system("pause");
//     return 0;
// }