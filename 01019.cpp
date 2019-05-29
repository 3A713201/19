#include<stdio.h> 

#include<stdlib.h> 

#include<math.h>   

int main()

{


	printf("-------------------------------------------------\n");

	printf("                算圖中的點：矩形                 \n");

	printf("-------------------------------------------------\n");

	printf("請輸入一連串(最多10個)矩形的左上及右下座標：（輸入完畢後請輸入{*}）\n");  

    char s[5];

    int n=0;

    double map[11][4];

    int cr[11];

      while(1)

      {

          scanf("%s",s);

          if(s[0]=='*') break; 

          if(s[0]=='l') 

          {

            scanf("%lf %lf %lf %lf",&map[n][0],&map[n][1],&map[n][2],&map[n][3]); 

             cr[n]=1;

          } 

          else

          {

            scanf("%lf %lf %lf",&map[n][0],&map[n][1],&map[n][2]);

            cr[n]=0;

          }  

          n++; 

     }

    int u,b,c,m=0;

    double x,y; 

      while(1)

      {

      	printf("請輸入座標(x,y)：");  

        scanf("%lf %lf",&x,&y);

        if(x==9999.9&&y==9999.9) break; 

        int flag=0;

        m++;

          for(u=0;u<n;u++) 

          {

            if(cr[u]==1&&x>map[u][0]&&x<map[u][2]&&y<map[u][1]&&y>map[u][3]) 

              {printf("判斷結果：Point %d is contained in figure %d\n",m,u+1);flag=1;}   

            if(cr[u]==0&&sqrt((x-map[u][0])*(x-map[u][0])+(y-map[u][1])*(y-map[u][1]))<map[u][2]) 

              {printf("判斷結果：Point %d is contained in figure %d\n",m,u+1);flag=1;}  

         }

            if(flag==0)

               printf("判斷結果：Point %d is not contained in any figure\n",m);  

      } 

       return 0;

}
