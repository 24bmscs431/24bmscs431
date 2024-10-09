# include <stdio.h>
# define n 5
int num[n];
int top=-1;
int push(int x){
    if (top ==n-1){
      printf("stack is overflow \n ");
          }
          else {
            top++;
            num[top]=x;
          }
        }
        int pop(){
            if(top==-1){
                printf("stack is underflow \n ");

            }
            else{
                int t=num[top];
                top--;
                printf("popped element is %d\n",t);
            }
        } 
        int display(){
            if (top ==-1){
             printf("stack is underflow \n ");
            }
            else {
                for(int i;i<=top; i++){
                    printf("the element in %d index id :%d\n",i, num[i]);
                }

            }
                
        }
        int main(){
            int x;
            int o;
            do{
                printf("[push:1,pop:2, display:3,exist:4]\n");
                printf("enter ur choice:");
                scanf("%d",&x);
                switch(x){
                    case 1:
                    printf ("enter the item to be pushed:");
                    scanf("%d",&o);
                    push(o);
                    break;
                    case 2:
                    pop();
                    break;
                    case 3:
                    display();
                    break;
                    case 4: 
                    return 0;
                    default :
                    printf("invalid input\n");
                }
            } while (1);
        }