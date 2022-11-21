#include<stdio.h>
  int main() {
  int a,b,cv,dt;
  printf("Nhap canh a= \n");
  scanf("%d", &a);
  printf("Nhap canh b= \n");
  scanf("%d", &b);

  cv = 2*(a+b);
  dt = a*b;

  printf("Chu vi cua hinh chu nhat= %d\n",cv);
  printf("Dien tich cua hinh chu nhat= %d", dt);
}

