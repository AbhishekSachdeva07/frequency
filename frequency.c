#include <stdio.h>
#include <stdbool.h>
int main()
{
    int a;
    scanf("%d",&a);
    int arr[a];
    //input array
    for (int i=0; i<a; ++i){
        scanf("%d",&arr[i]);
    }
    bool counted[a];
    for(int i=0; i<a;++i){
        counted[i]=false;
    }
    for(int i=0; i<a; ++i){
        int count=0;
        if(!counted[i]){
            for(int j=0; j<a; ++j){
                if(arr[i]==arr[j]){
                    count+=1;
                    counted[j]=true;
                }
            }
            printf("%d--> %d\n",arr[i],count);
        }
    }
    
    
    
    return 0;
}
