//
//  main.c
//  1031查验身份
//
//  Created by hanhan on 2019/3/9.
//  Copyright © 2019 hanhan. All rights reserved.
//

#include <stdio.h>

int main()
{
    char id[19];
    int rate[]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
    char ans[]="10X98765432";
    int N,sum,count=0;
    scanf("%d",&N);
    for(int i=0;i<N;i++)
    {
        sum =0;
        scanf("%s",id);
        int j=0;
        for( j=0;j<17&&id[j]<='9'&&id[j]>='0';j++)
        {
            sum += (id[j]-'0')*rate[j];
        }
        if(j==17&&id[17]==ans[sum%11])
        {
            count++;
        }
        else
        {
            printf("%s\n",id);
        }
    }
    if(count==N)
    {
        printf("All passed");
    }
    return 0;
    
}
