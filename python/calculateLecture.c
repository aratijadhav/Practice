#include<stdio.h>
#include<math.h>

// int calculateLec(float ttl,float atl){

//     int c=0;
//     float ans = 0.0f;
//     float tempatl = atl,tempttl = ttl;

//     while(ans<75){
//         ttl = tempttl + ttl;
//         atl = atl + tempttl;
//         ans = ((100*atl)/ttl);
//         printf("%f %f %f\n",ttl, atl, ans);
//     }

//     while(ans>75){

//         ttl = ttl-1;
//         atl = atl-1;

//         ans = ((100*atl)/ttl);
//         printf("%f %f %lf\n",ttl, atl, ans);
//     }

//     int minlec = atl-tempatl;

//     if(minlec<0)
//         printf("0");
//     printf("%d",minlec);
// }

void calculateLec(int ttl,int atl){
    int x = 0;

    x = ((ttl*0.75)-atl)/0.25;

    if(x < 0)
        printf("0");
    else
        printf("%d",x);
}

int main(){

    int num = 0,i = 0;
    int ttl=0,atl=0;
   
    scanf("%d",&num);

    for(i=0;i<num;i++){
        scanf("%d %d",&ttl,&atl);
        calculateLec(ttl,atl);
        //printf("%d",ans);
    }

   
    return 0;
}