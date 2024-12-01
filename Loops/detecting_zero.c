#include <stdio.h>

int main() {
int n,m;
int found;

printf("How many numbers you want to enter: ");
scanf("%d", &n);
   
for(int i=1;i<=n;i++){
scanf("%d",&m);
if(m==1){found==0;continue;}
if(m==0){found==1;}

}
if(found==1)printf("Yes");
else printf("no");
return 0;
}

