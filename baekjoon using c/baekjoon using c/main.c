//
//  main.c
//  baekjoon using c
//
//  Created by 권택준 on 2019/10/28.
//  Copyright © 2019 권택준. All rights reserved.
//
/*10828 스택
#include <stdio.h>
#include <string.h>
int main(){
    int size = 0;
    int input = 0;
    int repeat = 0;
    int stack[10000];
    char command[6];
    scanf("%d",&repeat);
    for(int i = 0; i<repeat; i++){
        scanf("%s",command);
        if(strcmp(command,"pop") == 0){
            if(size == 0){
                printf("-1\n");
            }
            else{
                printf("%d\n",stack[size-1]);
                size--;
            }
           }
        else if(strcmp(command,"push") == 0){
            scanf("%d",&input);
            stack[size] = input;
            size++;
        }
        
        else if(strcmp(command,"top") == 0){
            if(size == 0){
                printf("-1\n");
            }
            else{
                printf("%d\n",stack[size-1]);
            }
        }
        else if(strcmp(command,"empty") == 0){
            if(size == 0){
                printf("1\n");
            }
            else{
                printf("0\n");
            }
        }
        else if(strcmp(command,"size") == 0){
            printf("%d\n",size);
        }
    }
    
    return 0;
}
*/

/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>



typedef struct queue{
    int data[10000];
    int rear;
    int front;
    int size;
}Que;
void initque(Que *q){
    q -> rear = 0;
    q -> front = 0;
    q -> size = 0;
};
void is_full(){
    printf("Queue is full");
}

void push(Que * q, int input){
    q -> rear = (q -> rear +1) % 10000;
    q -> data[q->rear] = input;
}

void pop(Que * q){
    q-> front = (q->front + 1) % 10000;
}
void front(Que * q){
    if(q->size <= 0){
        printf("-1\n");
    }
    else{
        printf("%d\n",q->data[q->front+1]);
    }
}
void back(Que * q){
    if(q-> size <= 0){
        printf("-1\n");
    }
    else{
        printf("%d\n",q->data[q->rear]);
    }
}


int main(){
    int repeat;
    char order[6];
    int input;
    
    Que q;
    initque(&q);
    
    scanf("%d",&repeat);
    for(int i = 0; i<repeat; i++){
        scanf("%s",order);
        if(strcmp(order,"push") == 0){
            if(q.size == 10000){
                is_full();
            }
            else{
                scanf("%d",&input);
                push(&q,input);
                q.size++;
            }
        }
        else if(strcmp(order,"pop") == 0){
            if (q.size == 0 ){
            printf("-1\n");
            }
            else{
            pop(&q);
            printf("%d\n",q.data[q.front]);
            q.size--;
            }
        }
        else if(strcmp(order, "size") == 0){
            if(q.size <= 0){
                q.size = 0;
                printf("%d\n",q.size);
            }
            else{
            printf("%d\n",q.size);
            }
        }
        
        else if(strcmp(order, "empty") == 0){
            if(q.size <= 0){
                printf("1\n");
            }
            else{
                printf("0\n");
            }
        }
        
        else if(strcmp(order, "front") == 0){
            front(&q);
        }
        
        else if(strcmp(order, "back") == 0){
            back(&q);
        }
    }
    
    
    
    
    
    return 0;
}
*/

/*1065 한수
#include <stdio.h>

int main(){
    
    
    int input;
    int count = 0;
    scanf("%d",&input);
    for(int a = 1 ; input >= a; a++){
        int temp1 = a % 100 % 10;
        int temp2 = a % 100 / 10;
        int temp3 = a / 100;
        
        if(a<10){
            count++;
        }
        else if(a<100){
            count++;
        }
        else if(a<1000){
            if(temp3 - temp2 == temp2 - temp1){
                count++;
            }
        }
    }
    printf("%d",count);
    
    
    
    return 0;
}
*/

/* 17362
#include <stdio.h>
int main(){
    int input;
    int arr[8] = {1,2,3,4,5,4,3,2};
    scanf("%d",&input);
    
    input %= 8;
    
    
    if(input == 0){
        input = 8;
    }
    printf("%d",arr[input-1]);
    
    
    
    return 0;
}
*/

/*2438 별찍기
#include <stdio.h>

int main(){
    int input;
    scanf("%d",&input);
    
    for(int i = 1; i<=input; i++)
    {
        for(int a = 0; a<i; a++ ){
            printf("*");
        }
        printf("\n");
        
    }
    
    return 0;
}
*/

/*
#include <stdio.h>
#include <string.h>

int main(){
    
    char input[101] = {0,};
    
//    fgets(input,sizeof(input),stdin);
    scanf("%s",input);
    
    input[strlen(input)] = '\0';
    for(int a= 1; a<11; a++){
        for(int b = (a-1)*10; b<10*a; b++){

        
            printf("%c",input[b]);

        if(input[b] == '\0'){
            return 0;
        }
            
        }
        printf("\n");
    }
    return 0;
}
*/




/*2908
#include <stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int hundred_f = a % 100 % 10;
    int ten_f = a %100 /10;
    int one_f = a / 100;
    
    int hundred_s = b % 100 % 10;
    int ten_s = b % 100 /10;
    int one_s = b / 100;
    
    
    
    if(hundred_f>hundred_s){
        printf("%d%d%d",hundred_f,ten_f,one_f);
    }
    else if(hundred_f==hundred_s){
        if(ten_f>ten_s){
            printf("%d%d%d",hundred_f,ten_f,one_f);
        }
        else if(ten_f<ten_s){
            printf("%d%d%d",hundred_s,ten_s,one_s);
        }
        else if(ten_f==ten_s){
            if(one_f>one_s){
                printf("%d%d%d",hundred_f,ten_f,one_f);
            }
            else if(one_f>one_s){
                printf("%d%d%d",hundred_s,ten_s,one_s);
            }
            
        }
        
    }
    else if(hundred_f<hundred_s){
        printf("%d%d%d",hundred_s,ten_s,one_s);
    }
     
    
    return 0;
}

*/
/*2920.
#include <stdio.h>

int main(){
    int a[8];
    int count = 0;
    
    scanf("%d %d %d %d %d %d %d %d",&a[0],&a[1],&a[2],&a[3],&a[4],&a[5],&a[6],&a[7]);
    
    for(int i = 0; i<8; i++){
        if(i+1 == a[i])
            count++;
        else if(i+1 == a[7-i])
            count--;
        
    }
    
    if(count == 8){
        printf("ascending");
    }
    else if(count == -8){
        printf("descending");
    }
    
    else{
        printf("mixed");
    }
    
    
    
    return 0;
}
*/
/*9012
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    int repeat;
    
    scanf("%d",&repeat);
    for(int i = 0; i<repeat; i++){
        
        
        char * string = (char *)malloc(sizeof(char)*50);
        scanf("%s",string);
        int count1 = 0;
        for(int a = 0; a<strlen(string); a++){
            
            if(string[a] == '('){
                count1++;
            }
            else if(string[a] == ')'){
                count1--;
            }
            if(count1 < 0){
                break;
            }
        }
        
        
        if(count1 == 0){
            printf("YES\n");
        }
        

        else{
            printf("NO\n");
        }
        free(string);
    }
    
    
    
    
    return 0;
}
*/



/*16283.
#include <stdio.h>

int main(){
    
    int a,b,n,w;
    int count = 0;
    int check_sheep = 0;
    int check_goat = 0;
    int sheep;
    int goat;
    
    scanf("%d %d %d %d\n",&a,&b,&n,&w);

    for(int k = 0; k<n-1; k++){
        check_sheep++;
        check_goat = n - check_sheep;
        if(check_sheep * a + check_goat * b == w){
            count++;
            sheep = check_sheep;
            goat = check_goat;
            
        }
        
    }
    
    if(count == 1){
        printf("%d %d",sheep,goat);
    }
    
    else{
        printf("-1");
    }
    
    
    return 0;
}
*/

/*4344
#include <stdio.h>


int main(){
    int repeat;
    
    int student_num;
    int sum = 0;
    double average;
    int count = 0;
    double overaverage;
    int student_grade[1000];
    scanf("%d",&repeat);
    
    for(int a = 0; a < repeat; a++){
        count = 0;
        sum = 0;
        average = 0;
        
        scanf("%d",&student_num);
        
        for(int b = 0; b<student_num; b++){
            scanf("%d",&student_grade[b]);
            sum+=student_grade[b];
        }
        average = (double)sum /student_num;
        
        for(int c = 0; c<student_num;  c++){
            if(average < student_grade[c])
                count++;
        }
        overaverage = (double)count / student_num * 100;
        
        printf("%.3lf%%\n",overaverage);
        
        
    }
    
    return 0;
    
}
*/



/*1913
#include <stdio.h>


int main(){
    int width;
    int value;
    int arr[999][999];
    int row = -1;
    int col = 0;
    int repeat;
    int IncreaseOrDecrease = 1;
    int where;
    int row_result;
    int col_result;
    
    
    
    
    scanf("%d",&width);
    scanf("%d",&where);
    
    value = width*width;
    repeat = width;
    
    while(1){
        
    
        for(int i = 0; i<width; i++){
            row+=IncreaseOrDecrease;
                arr[row][col] = value;
                value--;
            }
        width--;
            
        for(int i = 0; i<width; i++){
            col+=IncreaseOrDecrease;
                arr[row][col] = value;
                value--;
            }
            
        if(width == 0){
                break;
            }
        IncreaseOrDecrease *= -1;
        }
    
    
    
    
    
    for(int i = 0; i<repeat; i++){
        for(int k = 0; k<repeat; k++){
            printf("%d ",arr[i][k]);
            if(arr[i][k] == where){
                row_result = i+1;
                col_result = k+1;
                
            }
            
        }
        printf("\n");
        
    }
    
    printf("%d %d",row_result,col_result);
    
    
    
    
    
    return 0;
    
    
}

*/
/*2439
#include <stdio.h>

int main(){
    
    int a;
    scanf("%d",&a);
    for(int i = 0; i<a; i++){
        for(int k = 1; k<a-i; k++){
            printf(" ");
        }
        for(int j = 0; j<=i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    
    
    return 0;
}*/



/*2440
#include <stdio.h>

int main(){
    int repeat;
    scanf("%d",&repeat);
    
    for(int a = 0; a<repeat; a++){
        
        for(int b = 0; b<repeat - a; b++){
            printf("*");
        }
        printf("\n");
        
        
    }
    
    
    return 0;
}
*/
/*2441
#include <stdio.h>

int main(){
    int repeat;
    scanf("%d",&repeat);
    for(int a = 0; a<repeat; a++){
        for(int b = 0; b!=a; b++){
            printf(" ");
        }
        for(int c = 0; c<repeat - a; c++){
            printf("*");
        }
        printf("\n");
        
    }
    
    
    return 0;
}
*/

/*2442
#include <stdio.h>

int main(){
    int repeat;
    scanf("%d",&repeat);
    for(int a = 0; a<repeat; a++){
        for(int b = a; b<repeat-1; b++){
            printf(" ");
        }
        if(a == 0){
            printf("*");
        }
        else{
            for(int c = 0; c<a*2+1; c++){
                printf("*");
            }
        }
        
        printf("\n");
    }
    
    
    
    return 0;
}
*/



/*2443
#include <stdio.h>

int main(){
    
    int repeat;
    int acceleration = 1;
    scanf("%d",&repeat);
    
    for(int a = 0; a<repeat; a++){
        
        for(int b = 0; b<a; b++){
            printf(" ");
        }
        for(int c = 0; c<repeat*2-acceleration; c++){
            printf("*");
        }
        printf("\n");
        acceleration++;
        acceleration++;
        
    }
    
    
    
    
    
    return 0;
}
*/





/*2444

#include <stdio.h>

int main(){
    
    int repeat;
    scanf("%d",&repeat);
    int acceleration = 1;
    int acceleration2 = 0;
    
    
    for(int a = 0; a<repeat*2-1; a++){
        if(a >= repeat){
            
            for(int d = 0; d<=a-repeat; d++){
                printf(" ");
                }
            
            for(int e = 0; e<=repeat * 2 - 4 - acceleration2; e++){
                printf("*");
            }
            acceleration2++;
            acceleration2++;
            printf("\n");
        }
        
        
        else{
            for(int b = 0; b<repeat-acceleration; b++){
                printf(" ");
            }
            
            for(int c = 0; c<a*2+1; c++){
                printf("*");
            }
            
            acceleration++;
            printf("\n");
            
        }
        
        
        
    }
    
    
    return 0;
}
*/


/*2739
#include <stdio.h>

int main(){
    int input;
    scanf("%d",&input);
    for(int a = 1; a<10; a++){
        printf("%d * %d = %d",input,a,input*a);
        printf("\n");
    }
    return 0;
}
*/
/*2884.
#include <stdio.h>


int main(){
    int h, m;
    scanf("%d %d",&h,&m);
    m = m - 45;
    
    if(m < 0 ){
        h--;
        if(h < 0){
            h = 24 + h;
            m = 60 + m;
            printf("%d %d",h,m);
        }
        else{
        m = 60 + m;
        printf("%d %d",h,m);
        
        }
    }
    else{
        printf("%d %d",h,m);
    }
    
    
    return 0;
}
*/
/*
#include <stdio.h>

int main(){
    
    int morning;
    int night;
    int goal;
    int temp = 0;
    int daycount = 1;
    
    
    scanf("%d %d %d",&morning,&night,&goal);
    
    while(1){
        temp += morning;
        if(temp >= goal){
            printf("%d",daycount);
            break;
        }
        temp -= night;
        daycount++;
        if(temp >= goal){
            printf("%d",daycount);
            break;
        }
        
        
    }
    
    
    
    
    return 0;
}
*/
/*
#include <stdio.h>

int main(){
    
    int repeat;
    scanf("%d",&repeat);
    int input[100];
    
    for(int i = 0; i<repeat; i++){
        scanf("%d",&input[i]);
        if
        
    }
}
*/

/*11720
#include <stdio.h>
#include <string.h>
int main(){
    
    int repeat;
    char sum[1000];
    int result = 0;
    
    scanf("%d",&repeat);
    scanf("%s",sum);
    for(int i = 0; i<repeat; i++){
        result += sum[i] - '0';
    }
    printf("%d",result);
    return 0;
}

*/
/*2798
#include <stdio.h>

int main(){
    int n,m;
    int input[100];
    int sum = 0;
    int result = 0;
    
    
    scanf("%d %d",&n,&m);
    
    for(int a = 0; a<n; a++){
        scanf("%d",&input[a]);
    }
    
    for(int a = 0; a<n; a++){
        for(int b = a+1; b<n; b++){
            for(int c = b+1; c<n; c++){
                sum = input[a] + input[b] + input[c];
                if(sum == m){
                    printf("%d",m);
                    return 0;
                }
                else if(result < sum && sum < m ){
                    result = sum;
                }
                
            }
        }
    }
    
    printf("%d",result);
    return 0;
}*/

/*2557
#include <stdio.h>

int main(){
    
    printf("Hello World!");
 return 0;
}
*/

/*10718
#include <stdio.h>

int main(){
    
    for(int i = 0; i <2; i++){
        printf("강한친구 대한육군\n");
    }
    return 0;
}
*/

/*10171
#include <stdio.h>

int main(){
    
    printf("\\    /\\ \n");
    printf(" )  ( ')\n");
    printf("(  /  )\n");
    printf(" \\(__)|");
    return 0;
}
*/
/*10172
#include <stdio.h>

int main(){
    printf("|\\_/|\n");
    printf("|q p|   /}\n");
    printf("( 0 )\"\"\"\\ \n");
    printf("|\"^\"`    | \n");
    printf("||_/=\\\\__|");
           
    return 0;
}*/
/*7287
#include <stdio.h>

int main(){
    
    printf("29\n");
    printf("kyuzu123123");
    return 0;
}
*/

/*10998
#include <stdio.h>

int main(){
    int first, second;
    scanf("%d %d",&first,&second);
    printf("%d",first*second);
}
*/


/*1008
#include <stdio.h>

int main(){
    
    int first,second;
    double result;
    scanf("%d %d",&first,&second);
    
    result = (double)first/second;
    printf("%.9lf",result);
    
}
*/
/*10430
#include <stdio.h>

int main(){
    
    int first,second,third;
    scanf("%d %d %d",&first,&second,&third);
    
    printf("%d\n",(first+second)%third);
    printf("%d\n",(first%third + second%third)%third);
    printf("%d\n",(first*second)%third);
    printf("%d\n", (first%third * second%third)%third);
    return 0;
}
*/
/*2588
#include <stdio.h>

int main(){
    int first, second;
    
    scanf("%d",&first);
    scanf("%d",&second);
    
    printf("%d\n",first*(second%100%10));
    printf("%d\n",first*(second%100/10));
    printf("%d\n",first*(second/100));
    printf("%d\n",first*second);
    
    
    
    return 0;
}
*/

/*1330
#include <stdio.h>

int main(){
    int first,second;
    
    scanf("%d %d",&first,&second);
    if(first>second){
        printf(">");
        
    }
    else if(first<second){
        printf("<");
    }
    else if(first == second){
        printf("==");
    }
    return 0;
}
*/

/*9498
#include <stdio.h>

int main(){
    
    int input;
    scanf("%d",&input);
    if(input >=90 && input <= 100){
        printf("A");
    }
    else if(input >= 80 && input < 90){
        printf("B");
    }
    else if(input >= 70 && input < 80){
        printf("C");
    }
    else if (input >=60 && input < 70){
        printf("D");
    }
    else{
        printf("F");
    }
    
    
    
    return 0;
}
*/

/*2753
#include <stdio.h>

int main(){
    int year;
    
    scanf("%d",&year);
    if(year % 4 == 0 && year % 100 != 0){
        printf("1");
    }
    else if(year % 400 == 0){
        printf("1");
    }
    else{
        printf("0");
    }
    return 0;
}
*/
/*10817
#include <stdio.h>

int main(){
    int a[3];
    scanf("%d %d %d",&a[0],&a[1],&a[2]);
    
    for(int b = 0; b<2; b++){
        for(int c = 0; c<2-b; c++){
            if(a[c]>a[c+1]){
                int temp;
                temp = a[c+1];
                a[c+1] = a[c];
                a[c] = temp;
                
                
            }
        }
    }
    
    printf("%d",a[1]);
    return 0;
}
*/


/*10950
#include <stdio.h>

int main(){
    int repeat;
    int input[100];
    int input2[100];
    
    scanf("%d",&repeat);
    for(int a = 0; a<repeat; a++){
        scanf("%d %d",&input[a],&input2[a]);
        printf("%d\n",input[a]+input2[a]);
        
    }
    return 0;
}*/

/*8393
#include <stdio.h>

int main(){
    
    int repeat;
    int sum=0;
    scanf("%d",&repeat);
    
    for(int i = 1; i<=repeat; i++){
        sum +=i;
    }
    printf("%d",sum);
}
*/

/*15552
#include <stdio.h>

int main(){
    int repeat;
    int a,b;
    scanf("%d",&repeat);
    for(int i = 0; i<repeat; i++){
        scanf("%d",&a);
        scanf("%d",&b);
        printf("%d\n",a+b);
    }
    
}
*/


/*2741
#include <stdio.h>

int main(){
    
    int repeat;
    scanf("%d",&repeat);
    for(int i = 1; i<=repeat; i++){
        printf("%d\n",i);
    }
    return 0;
}
*/

/*2742
#include <stdio.h>

int main(){
    int repeat;
    scanf("%d",&repeat);
    
    for(int i = repeat; i>0; i--){
        printf("%d\n",i);
        
    }
}
*/

/*11021
#include <stdio.h>

int main(){
    int repeat;
    int x,y;
    scanf("%d",&repeat);
    for(int i = 1; i<=repeat; i++){
        scanf("%d",&x);
        scanf("%d",&y);
        printf("Case #%d: %d\n",i,x+y);
    }
    return 0;
}
*/


/*11022
#include <stdio.h>

int main(){
    int repeat;
    int x,y;
    scanf("%d",&repeat);
    for(int i = 1; i<=repeat; i++){
        scanf("%d",&x);
        scanf("%d",&y);
        printf("Case #%d: %d + %d = %d\n",i,x,y,x+y);
    }
    return 0;
}
*/

/*10871
#include <stdio.h>

int main(){
    int num;
    int num2;
    scanf("%d",&num);
    scanf("%d",&num2);
    int num3[num];
    for(int i = 0; i<num; i++){
        scanf("%d",&num3[i]);
        
    }
    
    for(int i = 0; i<num; i++){
        if(num3[i]<num2){
            printf("%d ",num3[i]);
        }
    }
    
    
    
    return 0;
}
*/


/*10952
#include <stdio.h>

int main(){
    int a[100],b[100];
    int i = 0;
    int j = 0;
    while(1){
        scanf("%d %d",&a[i],&b[i]);
        if(a[i] == 0 && b[i] == 0){
            
            break;
        }
        i++;
        
    }
    while(1){
        if(a[j] == 0 && b[j] == 0){
            break;
        }
        printf("%d\n",a[j]+b[j]);
        
        j++;
    }
    
    
    return 0;
}
*/
/*10951
#include <stdio.h>

int main() {

    int a[1000], b[1000];
    int i = 0;
    int max = 0;
    char ch;

    while (1) {
        scanf("%d %d", &a[i], &b[i]);

        if ((ch = getchar()) == EOF) break;
        i++;
    }

    max = i;

    for (i = 0; i < max; i++) {
        printf("%d\n", a[i] + b[i]);
    }

    return 0;
}
*/

/*
#include <stdio.h>

int main(){
    int repeat;
    int input[1000000];
    int temp;
    scanf("%d",&repeat);
    
    for(int i = 0; i<repeat; i++){
        scanf("%d",&input[i]);
    }
    
    for(int a = 0; a<repeat; a++){
        for(int b = 0; b<repeat - 1 - a; b++){
            if(input[b]>input[b+1]){
                
                temp = input[b+1];
                input[b+1] = input[b];
                input[b] = temp;
            }
        }
    }
    printf("%d %d",input[0],input[repeat-1]);
    return 0;
}
*/

/*2747
#include <stdio.h>

int main(){
    
    int fibo[1000] = {0,1};
    int input;
    
    scanf("%d",&input);
    
    for(int i = 2; i<=input; i++){
        fibo[i] = fibo[i-1] + fibo[i-2];
    }
    
    printf("%d",fibo[input]);
    
    return 0;
}
*/

/*11726
#include <stdio.h>

int main(){
    int input;
    int tile[1000];
    tile[0] = 1;
    tile[1] = 2;
    
    for(int i = 2; i<1000; i++){
        tile[i] = tile[i-1] + tile[i-2] % 10007;
        
    }
    
    scanf("%d",&input);
    
    
    printf("%d",tile[input-1]%10007);
    
    
    return 0;
}
*/


/*2839
#include <stdio.h>

int main(){
    
    int total;
    int _3kg;
    int _5kg;
    
    scanf("%d",&total);
    _5kg = total / 5;
    total %= 5;
    
    while(_5kg >= 0){
        if(!(total % 3)){
            _3kg = total / 3;
            total %= 3;
            break;
        }
        _5kg--;
        total += 5;
        
    }
    
    if(total != 0){
        printf("-1");
    }
    
    else{
        printf("%d",_3kg + _5kg);
    }
    
    
    return 0;
}

*/



/*9461
#include <stdio.h>

int main(){
    int repeat;
    int answer;
    long long sol[101] = {1,1,1};
    
    for(int a = 3; a<101; a++){
        sol[a] = sol[a-2] + sol[a-3];
    }
    scanf("%d",&repeat);
    for(int i = 0; i<repeat; i++){
        scanf("%d",&answer);
        printf("%lld\n",sol[answer-1]);
    }
    return 0;
}
*/
/*9095
#include <stdio.h>

int main(){
    
    
    
    int repeat;
    int solve[10] = {1,2,4,};
    int answer;
    scanf("%d",&repeat);

    for(int i = 3; i<10; i++){
        solve[i] = solve[i-3] + solve[i-2] + solve[i-1];
    }
    
    for(int z = 0; z<repeat; z++){
        scanf("%d",&answer);
        printf("%d\n",solve[answer-1]);
        
    }
    return 0;
    
}
 
 */





/*11727
#include <stdio.h>

int main(){
    
    long long solve[1000];
    int answer;
    solve[0] = 1;
    solve[1] = 3;
    
    for(int i = 2; i<1000; i++){
        
        solve[i] = (solve[i-1] + solve[i-2] * 2) % 10007;
        
    }
    
    scanf("%d",&answer);
    printf("%lld\n",solve[answer-1]);
    
    
    
    
    return 0;
}
*/

/*10818
#include <stdio.h>

int main(){
    
    int solve[1000000] = {0,};
    int repeat;
    int temp1, temp2;
    scanf("%d",&repeat);
    for(int i = 0; i<repeat; i++){
        scanf("%d",&solve[i]);
    }
    temp1 = solve[0];
    temp2 = solve[0];
    
    for(int i = 0; i<repeat; i++){
        if(temp1 > solve[i]){
            temp1 = solve[i];
        }
    }
    
    
    for(int i = 0; i<repeat; i++){
        if(temp2 < solve[i]){
            temp2 = solve[i];
        }
    }
    
    printf("%d %d",temp1,temp2);
    
    
    
    return 0;
}
*/


/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _node{
    
    int data;
    struct _node * link[10];
    
    

}Node;

Node * head, * end; 



void InitNode(int vertex, int edge, struct _node * Node);
void DFS(int vertex, int edge, int start, struct _node * Node);


int main(){
    
    int vertex,edge,start; //vertex = 정점 edge = 간선
    scanf("%d %d %d",&vertex,&edge,&start);
    
    Node * Allocated_NODE = (Node *)malloc(sizeof(Node)*vertex);
     
    InitNode(vertex, edge, Allocated_NODE);
    
    DFS(vertex, edge, start, Allocated_NODE);
    
    
    
    free(Allocated_NODE);
    
    return 0;
}




void InitNode(int vertex, int edge, Node * Allocated_NODE){
   
    head -> link[0] = &Allocated_NODE[0];
    Allocated_NODE[vertex].link[0] = end;
    
    
    for(int k = 1; k<=vertex; k++){
        Allocated_NODE[k-1].data = k;
    }
    
    
    int a = 1;
    int first,second;
    
    
    for(int i = 0; i<edge; i++){
        scanf("%d %d",&first,&second);
            
            if(Allocated_NODE[first].link[a] != NULL){
                for(int x = 0; Allocated_NODE[first].link[x] != NULL; x++){
                        a++;
                    }
            }
        
        Allocated_NODE[first].link[a] = &Allocated_NODE[second];
        
        a = 1;
        
        }
}


void DFS(int vertex, int edge, int start, Node * Allocated_NODE){
    
    
    
    Node * check_node;
    
    for(check_node = head -> link[0]; check_node != end; check_node = check_node -> link[0]){
        
        if(check_node -> data == start)
            break;
    }
    
    
    for(int i = 0; i < edge; i++){
        printf("%d",check_node -> data);
        check_node = check_node -> link[0];
    }
    
    
    printf("\n");
    
}

*/



/*2231
#include <stdio.h>

int main(){
    
    int input;
    int temp;
    int temp2;
    int increase;
    scanf("%d",&input);
    
    for(int a = 1; a<=1000000; a++){
        temp = a;
        temp2 = a;
        
        while(temp != 0){
            increase = temp % 10;
            temp2 += increase;
            temp /= 10;
            
            
//            if(temp2 == input){
//                printf("%d",a);
//                return 0;
//            } 아 개빡친다 여기가 아니네
            
        }
         if(temp2 == input){
                        printf("%d",a);
                        return 0;
                }
    }
    printf("0");
    
    return 0;
}


*/

/*

#include <stdio.h>


typedef struct person{
    int weight;
    int height;
    int rank;
    
}Person;

int main(){
    
    Person person[50];
    int repeat;
    
    scanf("%d",&repeat);
    
    for(int a = 0; a<repeat; a++){
        scanf("%d %d",&person[a].weight,&person[a].height);
        person[a].rank = repeat;
    }
    
    
    for(int a = 0; a<repeat; a++){
        for(int b = 1; b<repeat; b++){
            if(person[a].weight > person[b].weight && person[a].height > person[b].height){
                perso           
        }
    }
    
    for(int a = 0; a<repeat; a++){
        printf("%d ",person[a].rank);
    }
    
    
    return 0;
}
*/

/*15894
#include <stdio.h>

int main(){
    
    long long input;
    scanf("%lld",&input);
    printf("%lld",input*4);
    
    
    
    return 0;
}

*/


#include <stdio.h>
#include <string.h>

int main(){
    
    char a[100];
    
    gets(a);
    
    
    return 0;
}
