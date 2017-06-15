//
//  main.c
//  main
//
//  Created by 20161104614 on 2017/6/15.
//  Copyright © 2017年 20161104614. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a[20];
    int n,k,j,t,i;
    FILE *fp1,*fp2;
    fp1=fopen("//Users//a20161104614//Desktop/R\ file//1.txt","w+");
    fp2=fopen("//Users//a20161104614//Desktop//R\ file//2.txt","r+");
    while(fscanf(fp2,"%d",&n)!=EOF)
    {
        for(i=0;i<n;i++)
        {
            fscanf(fp2,"%d",&a[i]);
        }
        for(j=0;j<n-1;j++)
        {
            for(k=0;k<n-1-j;k++)
            {
                if(a[k]>a[k+1])
                {
                    t=a[k];
                    a[k]=a[k+1];
                    a[k+1]=t;
                }
            }
            for(k=0;k<i;k++)
            {
                printf("%d",a[k]);
                fprintf(fp1,"%d",a[k]);
            }
            fprintf(fp1,"\n");
            printf("\n");
        }
        fclose(fp1);
        fclose(fp2);
    }
    return 0;
}
