//
//  main.cpp
//  baekjoon using cpp
//
//  Created by 권택준 on 2020/03/07.
//  Copyright © 2020 권택준. All rights reserved.
//


/*2562
#include <iostream>
using namespace std;
int main() {
    // insert code here...
    int input [9];
    int temp = 0;
    int max = 0;
    for(int i = 0; i<9; i++){
        cin >> input[i];
    }
    
    temp = input[0];
    for(int i = 0; i<9; i++){
        if(temp < input[i]){
            temp = input[i];
        }
    }
    
    
    
    for(max = 0; max<9; max++){
        if(temp == input[max]){
            break;
        }
    }
    cout << temp << endl << max + 1;
    return 0;
}
*/


/*1712
#include <iostream>

using namespace std;

int main(){
    
    
    int a, b, c;
    
    cin >> a >> b >> c;
    if(c<=b){
        cout << -1;
        return 0;
    }
    
    
    cout << a/(c-b)+1;
    
    return 0;
}


*/

/*1110
#include <iostream>

using namespace std;
int main(){
    int input;
    int count = 1;
    int temp1, temp2;
    int result;
    
    cin >> input;//26
    
    
    if(input < 10){
        input *= 10;
    }
    
    temp1 = input / 10;//2
    temp2 = input % 10;//6
    result = (temp1 + temp2)% 10 + temp2 * 10;//68
    //여기서 10모듈러 계산안하면 19랑 55일때 각 자릿수 합이 10이 나와서 나중에 무한반복되기 때문에 10 모듈 해줘야함
    while(1){
        
        if(result == input){
            break;
        }
        
        temp1 = result / 10;//6
        temp2 = result % 10;//8
        result = (temp1 + temp2) % 10 + temp2 * 10;
        
        
        
        count++;
    }
    
    cout << count;
    return 0;
}
*/





/*3052
#include <iostream>

using namespace std;

int main(){
    
    
    int input[10];
    int result[10] = {0,};
    int count = 0;
    
    for(int i = 0; i<10; i++){
        cin >> input[i];
        result[i] = input[i] % 42;
    }
    
    for(int i = 0; i < 10; i++){
        for(int k = i; k < 9; k++){
            if(result[i] == result[k+1]){
                result[k+1] = 46;
            }
        }
    }
    
    for(int i = 0; i< 10; i++){
        if(result[i] != 46){
            count++;
        }
    }
    cout<<count;
    return 0;
    
}
*/

/*8958
#include <iostream>
#include <cstring>

using namespace std;

int main(){
    
    int repeat;
    char OX[80];
    int result[100] = {0,};
    int acceleration = 0;
    cin >> repeat;
    for(int z = 0; z<repeat; z++){
        
        cin >> OX;
        
        acceleration = 0;
        for(int k = 0; k< strlen(OX); k++){
            
                if(OX[k] == 'O'){
                acceleration++;
                result[z] += acceleration;
                
                }
                else{
                acceleration = 0;
                }
            
            
            }
        
        
    }
    
    for(int i = 0; i<repeat; i++){
        cout << result[i] << endl;
    }
    
    
    return 0;
    
}
*/






/*10872
#include <iostream>

using namespace std;

int main(){
    
    int input;
    cin >> input;
    int result = 1;
    
    
    for(int i = input; i>0; i--){
        
        result = i * result;
    }
    
    cout << result;
    
    
    
    return 0;
}

*/





/*1463
#include <iostream>

using namespace std;
int min(int a, int b){
    return (a<b) ? a : b;
}
int main(){
    
    int input;
    int result[1000001];
    cin >> input;
    result[1] = 0;
    for(int i = 2; i < 1000001; i++){
        
        result[i] = result[i - 1] + 1;
        
        if(i % 2 == 0){
            result[i] = min(result[i], result[i/2] + 1);
        }
        if(i % 3 == 0){
            result[i] = min(result[i], result[i/3] + 1);
        }
       
        
    }
    
    
    cout << result[input];
    
    
    return 0;
}
*/

/*2869
#include <iostream>

using namespace std;

int main(){
    
    int A,B,V;
    cin >> A >> B >> V;
    
    cout << (V - B - 1) / (A - B) + 1;
    return 0;
}
*/

/*2577
#include <iostream>

using namespace std;


int main(){
    
    int A,B,C;
    int multiply;
    int cmp[10] = {0,};
    
    cin >> A >> B >> C;
    multiply = A * B * C;
    
    
    while(multiply > 0){
        cmp[multiply % 10]+= 1;
        multiply /= 10;
    }
    
    for(int i = 0; i<10; i++){
        cout << cmp[i] << endl;
        
    }
    return 0;
}
*/
/*1152
#include <iostream>
#include <cstring>

using namespace std;

int main(){
    
    char input[1000000];
    int count = 1;
    
    
    cin.getline(input, 1000000);
    if(input[0] == ' '){
        count = 0;
    }
    
    if(input[strlen(input) - 1] == ' '){
        count--;
    }
    
    for(int i = 0; i<strlen(input); i++){
        if(input[i] == ' '){
            count++;
        }
    }
    cout << count;
    
    
    
    return 0;
}
*/


/*1546
#include <iostream>

using namespace std;

double MAX(double a, double b){
    return (a<b) ? b : a;
}
int main(){
    int repeat;
    double score[1000];
    double max;
    double new_average = 0;
    cin >> repeat;
    
    for(int i = 0; i<repeat; i++){
        cin >> score[i];
        
    }
    max = score[0];
    for(int i = 1; i<repeat; i++){
        
        max = MAX(max,score[i]);
    }
    
    
    for(int i = 0; i<repeat; i++){
        score[i] = score[i] / max * 100;
        
    }
    for(int i = 0; i<repeat; i++){
        new_average += score[i];
    }
    new_average /= repeat;
    
    printf("%.2lf",new_average);
    
    return 0;
}
*/




/*1157.//for문 조건식에 strlen을 쓰면 O(n^2)가 되서 시간초과이기 때문에 아프올 조건식에 strlen금지
#include <iostream>
#include <cstring>

using namespace std;
int MAX(int a, int b){
    return (a<b) ? b : a;
}
int main(){
    char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char input[1000002];
    int count[27] = {0,};
    int max;
    int check = 0;
    int count_input = 0;
    
    cin >> input;
    count_input = strlen(input);
    
    for(int i = 0; i<count_input; i++){//for문 조건식에 strlen을 쓰면 O(n^2)가 되서 시간초과이기 때문에 아프올 조건식에 strlen금지
        for(int k= 0; k<27; k++){
            if(input[i] == alphabet[k] || input[i] == alphabet[k] + 32){
                count[k]++;
            }
        }
    }
    
    max = count[0];
    for(int i = 1; i<27; i++){
        max = MAX(max,count[i]);
    }
    
    
    
    for(int i = 0; i<27; i++){
        if(max == count[i])
        {
            check++;
            
        }
        
       
    }
    
    if(check >= 2){
        cout << "?";
        return 0;
    }
    
    for(int i = 0; i<27; i++){
        if(max == count[i]){
            cout << alphabet[i];
        }
    }
    return 0;
}
*/



/*7568
#include <iostream>


using namespace std;

typedef struct _body{
    int weight;
    int height;
    

}Body;

int main(){
    
    
    int count = 1;
    int result[50] = {1,};
    int repeat;
    Body body[50];
    cin >> repeat;
    
    for(int i = 0; i<50; i++){
        result[i] = 1;
    }
    
    

    
    for(int i = 0; i<repeat; i++){
        cin >> body[i].weight >> body[i].height;
    }
    
    for(int i = 0; i<repeat; i++){
        for(int k = 0; k < repeat; k++){
            if(body[i].weight < body[k].weight && body[i].height < body[k].height)
            {
                result[i]++;
                
            }
            
        }
    }
    
    for(int i = 0; i<repeat; i++){
        cout << result[i] << " ";
    }
    
    
    
    return 0;
}


*/


/*1929
#include <iostream>
#include <cmath>
using namespace std;


int main(){
    
    bool primenumber[1000001];
    int m, n;
    double end;
    
    
    for(int i = 2; i < 1000001; i++){
        primenumber[i] = true;
    }
    cin >> m >> n;
    if(m < 2){
        m = 2;
    }
    end = sqrt(n);
    
    for(int i = 2; i<=end; i++){
        if(primenumber[i] == true){
            for(int k = i+i; k<1000001; k = k + i){
                primenumber[k] = false;
            }
        }
    }
    
    
    for(int i = m; i<=n; i++){
        if(primenumber[i] == true){
            cout << i << '\n'; //endl로 하면 시간초과 둘이 시간 차이 심하게 남
            
        }
    }
    return 0;
}
*/



/*4153
#include <iostream>
#include <cmath>

using namespace std;

int main(){
    
    
    int first, second, third;
    int count = 0;
    char * result[1000];
    
    while(1){
        
    cin >> first >> second >> third;
        if(first == 0 && second == 0 && third == 0){
            break;
        }
        
        if(first * first + second * second == third * third){
            result[count] = "right";
            count++;
        }
        else if(first * first + third * third == second * second){
            result[count] = "right";
            count++;
        }
        else if(second * second + third * third == first * first){
            result[count] = "right";
            count++;
        }
        else{
            result[count] = "wrong";
            count++;
        }
        
    }
    
    for(int i = 0; i<count; i++){
        cout << result[i] << endl;
    }
    
    return 0;
    
    
}
*/

/*
#include <iostream>

using namespace std;

int main(){
    
    char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char input[100];
    int input_len;
    int count;
    int result[26];
    
    for(int i = 0; i<26; i++){
        result[i] = -1;
    }
    
    cin >> input;
    
    input_len = strlen(input);
    
    for(int k = 0; k<26; k++){
        for(count = 0; count<input_len; count++){
            if(input[count] == alphabet[k])
                break;
        }
        result[k] = count;
    }
    for(int i = 0; i<26; i++){
        cout << result[i] << " ";
    }
}


*/


/*2751 //stl sort이용
#include <iostream>
#include <algorithm>

using namespace std;



int main(){
    
    int repeat;
    int arr[1000000];
    cin >> repeat;
    
    for(int i = 0; i<repeat; i++){
        cin >> arr[i];
    }
    sort(arr, arr+repeat);
    
    for(int i = 0; i<repeat; i++){
        cout << arr[i] << '\n';
    }
    
    
    return 0;
}
*/



/*11654
#include <iostream>

using namespace std;

int main(){
    char input;
    cin >> input;
    
    cout << (int)input;
    
    
    
    
    
    return 0;
}
*/

/*5543
#include <iostream>
#include <algorithm>

using namespace std;
int main(){
    
    int cost[5];
    int burger;
    int juice;
    
    for(int i = 0; i<5; i++){
        cin >> cost[i];
    }
    
    
    burger = min({cost[0],cost[1],cost[2]});
    juice = min(cost[3],cost[4]);
    
    cout << burger + juice - 50;
    
    
    return 0;
}

*/



/*1085
#include <iostream>
#include <algorithm>

using namespace std;


int main(){
    
    int x, y, w, h;
    int distance_x;
    int distance_y;
    int distance;
    
    cin >> x >> y >> w >> h;
    
    distance_x = min((w-x), x);
    distance_y = min((h-y), y);
    distance = min(distance_x, distance_y);
    cout << distance;
    return 0;
}
*/




/*2579
#include <iostream>
#include <algorithm>


using namespace std;

int main(){
    
    int repeat;
    int stair[301];
    int dp[301];
    cin >> repeat;
    
    for(int i = 1; i<=repeat; i++){
        cin >> stair[i];
    }
    
    dp[1] = stair[1];
    dp[2] = stair[1] + stair[2];
    dp[3] = max(stair[1]+stair[3], stair[2]+stair[3]);
    
    for(int i = 4; i<=repeat; i++){
        dp[i] = max(dp[i-2] + stair[i], dp[i-3] + stair[i-1] + stair[i]);
    }
    
    cout << dp[repeat];
    return 0;
}
*/




/*2156
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    
    int repeat;
    int glass[10001] = {0,};
    int dp[10001];
    cin >> repeat;
    for(int i = 1; i<=repeat; i++){
        cin >> glass[i];
    }
    
    dp[1] = glass[1];
    dp[2] = glass[1] + glass[2];
    
    
    
    for(int i = 3; i<=repeat; i++){
        dp[i] = max(dp[i-1] , max(dp[i-2] + glass[i], dp[i-3] + glass[i-1] + glass[i]));
    }
    
    
    cout << dp[repeat];
    return 0;
}
*/



/*5622
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int main(){
    char alphabet[15];
    int len;
    int cost = 0;
    
    cin >> alphabet;
    
    len = strlen(alphabet);
    
    for(int i = 0; i < len; i++){
        if(alphabet[i] <= 'C'){
            cost +=3;
        }
        else if(alphabet[i] > 'C' && alphabet[i] < 'G'){
            cost += 4;
        }
        else if(alphabet[i] >= 'G' && alphabet[i] < 'J'){
            cost += 5;
        }
        else if(alphabet[i] >= 'J' && alphabet[i] <= 'L'){
            cost += 6;
        }
        else if(alphabet[i] >= 'M' && alphabet[i] < 'P'){
            cost += 7;
        }
        else if(alphabet[i] >= 'P' && alphabet[i] <= 'S'){
            cost += 8;
        }
        
        else if(alphabet[i] >= 'T' && alphabet[i] <= 'V'){
            cost += 9;
        }
        else if(alphabet[i] >= 'W' && alphabet[i] <= 'Z'){
            cost += 10;
        }
    }
    
    cout << cost;
    
    return 0;
}
*/

/*2750
#include <iostream>

using namespace std;
void Swap(int * a, int * b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int Partition(int * arr, int left, int right){
    int pivot = arr[right];
    int i;
    int index = left;
    
    
    
    for(i = left; i<right; i++){
        if(arr[i] <= pivot){
            swap(arr[i],arr[index]);
            index++;
        }
    }
    
    swap(arr[index], arr[right]);
    return index;
}

void Quicksort(int * arr, int left , int right){
    
    int index;
    if(left < right){
        
        index = Partition(arr, left , right);
        Quicksort(arr, left , index-1);
        Quicksort(arr, index + 1, right);
    }
    else{
        return ;
    }
}



int main(){
    
    int repeat;
    int input[1000];
    
    cin >> repeat;
    
    for(int i = 0; i<repeat; i++){
        cin >> input[i];
    }
    
    Quicksort(input, 0, repeat - 1);
    
    for(int i = 0; i<repeat; i++){
        cout << input[i] << '\n';
        
    }
    
    return 0;
}
*/




/*1978
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main(){
    bool list[1001];
    int count = 0;
    int repeat;
    int input[100];
    int s_qrt = sqrt(1000)+1;
    
    
    for(int i = 0; i<1001; i++){
        list[i] = true;
    }
    
    list[0] = false;
    list[1] = false;
    
    for(int i = 2; i<1001; i++){
        if(list[i] == true){
            for(int k = i * 2; k<=1000; k+=i){
                
                list[k] = false;
            }
        }
    }
    
    cin >> repeat;
    for(int i = 0; i<repeat; i++){
        cin >> input[i];
    }
    
    sort(input,input+repeat);
    
    for(int i = 0; i<repeat; i++){
        if(list[input[i]] == true){
            count++;
        }
    }
    
    
    cout << count;
    return 0;
    }
    
    

*/




/*11047
#include <iostream>

using namespace std;

int main(){
    int repeat;
    int coin[10];
    int goal;
    
    int count = 0;
    int i = 1;
    cin >> repeat >> goal;
    for(int i = 0; i<repeat; i++){
        
        cin >> coin[i];
    }
    
    while(1){
        if(goal>=coin[repeat - i]){
            count++;
            goal-=coin[repeat - i];
        }
        else{
            i++;
        }
        
        if(goal == 0)
            break;
    
    }
    
    cout << count;
    return 0;
}
*/



/* //백준 온라인코테
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    
    int repeat;
    int input[100001];
    int cmp = 0;
    int start = -1;
    int count = 0;
    cin >> repeat >> cmp;
    for(int i = 0; i<repeat; i++){
        cin >> input[i];
    }
    
    while(1){
        start += cmp - 1;
        count++;
        
        
        if(start >= repeat-1){
        break;
        }
    }
        cout << count << '\n';
    
    
    return 0;
}
*/



/*1260
#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

int check[1001];
vector <int> a[1001];

void bfs(int start){
    queue <int> q;
    q.push(start);
    check[start] = true;
    while(!q.empty()){
        int x = q.front();
        q.pop();
        printf("%d ",x);
        for(int i = 0; i<a[x].size(); i++){
            int y = a[x][i];
            if(!check[y]){
                q.push(y);
                check[y] = true;
                
            }
        }
    }
    
}

void dfs(int start){
    if(check[start])
        return ;
    check[start] = true;
    cout << start << ' ';
    for(int i = 0; i<a[start].size(); i++){
        int y = a[start][i];
        dfs(y);
    }
}


void check_reset(void){
    for(int i = 1; i<1001; i++){
        check[i] = false;
    }
}



int main(){
    
    int node, repeat, start;
    int input1, input2;
    cin >> node >> repeat >> start;
    for(int i = 0; i<repeat; i++){
        cin >> input1 >> input2;
        a[input1].push_back(input2);
        a[input2].push_back(input1);
    }
    
    for(int i = 0; i<node; i++){
        sort(a[i].begin(), a[i].end());
    }
    
    
    dfs(start);
    cout << '\n';
    check_reset();
    bfs(start);
    return 0;
}
*/

/*
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    
    
    
    int input;
    
    
    cin >> input;
    
    if(input % 2 == 1){
        input = input - 3;
        cout << 7;
        
        for(int i = 0; i<input/2; i++){
            cout << 1;
            
        }
        return 0;
    }
   
    
    
    for(int i = 0; i<input/2; i++){
        cout << 1;
    }
    
    input = input % 2;
    
    
    return 0;
}
*/




/*2309
#include <iostream>
#include <algorithm>

#define check 43214324
using namespace std;

int main(){
    
    int input[9];
    int sum = 0;
    for(int i = 0; i<9; i++){
        cin >> input[i];
    }
    
    for(int i = 0; i<9; i++){
        sum += input[i];
    }
    
    
    for(int i = 0; i<9; i++){
        for(int k = i+1; k<9; k++){
            if(sum - input[i] - input[k] == 100){
                input[i] = check;
                input[k] = check;
                sort(input, input+9);
                for(int i = 0; i<9; i++){
                    if(input[i] != check)
                        cout << input[i] << endl;
                }
                return 0;
            }
        }
    }
    
    
    
    
    
}
*/




/*2292
#include <iostream>

using namespace std;

int main(){
    
    
    int input;
    int start = 1;
    int result = 1;
    int acceleration = 6;
    cin >> input;

    
    while(1){
        
        
        if(input <= start){
            cout << result;
            return 0;
        }
        
        start += acceleration;
        acceleration += 6;
        result++;
        
        
    }
    
    
    
    
    
    
    
    
    return 0;
}




*/

/*#include <bits/stdc++.h>
//boj 6603
using namespace std;


int list[14] = { 0, };
int input;
int solve[6] = { 0, };

void dfs(int start, int depth) {

	if (depth == 6) {
		for (int i = 0; i < 6; ++i) {
			cout << solve[i] << " ";
		}
		cout << '\n';
		return;
	}

	for (int i = start; i < input; ++i) {
		solve[depth] = list[i + 1];
		dfs(i + 1, depth + 1);
	
	}

}



int main() {

	while (1)
	{
		cin >> input;
		if (input == 0) {
			break;
		}
		for (int i = 0; i < input; ++i) {
			cin >> list[i + 1];
		}
		dfs(0, 0);
		cout << "\n";
	}
	return 0;
}
*/


/*
#include <iostream>
#include <algorithm>

//boj 1780
using namespace std;

int map[2190][2190] = { 0, };
int negative = 0;
int zero = 0;
int positive = 0;

bool check(int x, int y, int input, int num) {

	for (int i = 0; i < input; ++i) {
		for (int j = 0; j < input; ++j) {
			if (num != map[x + i][y + j])
				return false;
		}
	}
	return true;
	
}
void solve(int x, int y, int input)
{
	if (check(x, y, input, map[x][y])) {
		if (map[x][y] == 0)
			++zero;
		else if (map[x][y] == 1)
			++positive;
		else if (map[x][y] == -1)
			++negative;
	}

	else {
		for (int i = 0; i < 3; ++i) {
			for (int j = 0; j < 3; ++j) {
				solve(x + input / 3 * i, y + input / 3 * j, input / 3);
			}
		}
	}

	
}

int main() {

	int input;

	cin >> input;

	for (int i = 1; i <= input; ++i) {
		for (int j = 1; j <= input; ++j) {
			cin >> map[i][j];
		}
	}

	solve(1,1,input);

	cout << negative << endl << zero << endl << positive;

	return 0;

}


*/



/*
#include <iostream>
#include <algorithm>

//boj 2630
using namespace std;

int map[129][129] = { 0, };
int white = 0;
int blue = 0;


bool check(int x, int y, int width) {
   
    int temp = map[x][y];
    
    for (int i = x; i < x + width; ++i) {
        for (int j = y; j < y + width; ++j) {
            if (temp != map[i][j])
                return false;
        }
    }
       
    return true;
   
}


void solve(int x, int y, int width) {

    if (check(x, y, width)) {
        if (map[x][y] == 0) {
            ++white;
        }

        else if (map[x][y] == 1) {
            ++blue;
        }
    }

    else {
        solve(x, y, width / 2);
        solve(x + width / 2, y, width / 2);
        solve(x, y + width / 2, width / 2);
        solve(x + width / 2, y + width / 2, width / 2);


        }
          
}


int main() {


    int width;
    cin >> width;

    for (int i = 1; i <= width; ++i) {
        for (int j = 1; j <= width; ++j) {
            cin >> map[i][j];

        }
    }

    solve(1, 1, width);

    cout << white << endl << blue;




    return 0;

}

*/

/*
#include <iostream>
#include <algorithm>
//boj 18222
using namespace std;

long long solve(long long input) {

    
    if (input == 1)
        return 0;
    long long i;
    for (i = 1; i + i < input; i += i); 
    return !solve(input - i);

}


int main() {
    long long input;
    cin >> input;

    cout << solve(input);
    return 0;
}

*/


/*
#include <iostream>
#include <algorithm>
//boj 16974
using namespace std;


long long e_p = 0;
long long patty[51] = {1, };
long long sum[51] = {1, };

void solve(long long layer, long long eat) {
    if (eat == 0) {                         
        cout << e_p;
        return;
    }

    else if (layer == 0)
    {
        ++e_p;
        cout << e_p;
        return;
    }
        

    --eat;
    if (eat == sum[layer - 1]) {
        e_p += patty[layer - 1];
        eat -= sum[layer - 1];
        solve(layer - 1, eat);
    }
    else if (eat < sum[layer - 1]) {
        solve(layer - 1, eat);
    }

    else if (eat > sum[layer - 1]) {
        e_p += patty[layer - 1] + 1;
        eat -= sum[layer - 1] + 1;
        solve(layer - 1, eat);
    }


}

int main() {

    
    long long layer;
    long long eat;
    cin >> layer >> eat;
    

    for (int i = 1; i <= layer; ++i) {
        sum[i] = sum[i - 1] * 2 + 3;
        patty[i] = patty[i - 1] * 2 + 1;
    }

    solve(layer, eat);




    return 0;
}
*/

/*
#include <iostream>
#include <algorithm>
#include <string>
//boj 12919
using namespace std;

string tmp = "";

void solve(string input, string cmp) {

    if (input == cmp) {
        cout << "1";
        return;
    }

    if (input.length() >= cmp.length()) {
        cout << "0";
        return;
    }

    if (cmp[cmp.size() - 1] == 'A') {
        tmp = cmp;
        tmp.erase(tmp.size() - 1);
        solve(input, tmp);
    }

    if (cmp[0] == 'B') {
        tmp = cmp;
        tmp.erase(tmp.begin());
        reverse(tmp.begin(), tmp.end());
        solve(input, tmp);
    }

}
int main() {

    string input;
    string cmp;
    
    cin >> input;
    cin >> cmp;

    solve(input, cmp);
    
    return 0;
}
*/

/*
#include <iostream>
#include <algorithm>
#include <queue>
#include <cstring>
//boj 1012
using namespace std;

int map[50][50] = {0,};
int c[50][50] = { 0, };
int M, N;
int cnt;
int dir[4][2] = { 
    {-1,0} , 
    {0,1}, 
    {0,-1} , 
    {1,0} };
bool isInside(int x, int y) {
    return (x >= 0 && x < M) && (y >= 0 && y < N);
}

void bfs(int row, int col) {

    int cur_row = row; 
    int cur_col = col;
    queue<pair<int,int>> q;
    q.push(pair<int, int> (cur_row,cur_col));

    c[cur_row][cur_col] = 1;

    while (!q.empty()) {
    
        cur_row = q.front().first;
        cur_col = q.front().second;
        q.pop();

        for (size_t i = 0; i < 4; ++i) {
            int next_row = cur_row + dir[i][0];
            int next_col = cur_col + dir[i][1];
            
            if (isInside(next_row, next_col) && c[next_row][next_col] == 0 && map[next_row][next_col] == 1) {
                c[next_row][next_col] = 1;
                q.push(pair<int, int>(next_row, next_col));
            }

        }



    }


}
int main() {

    int T, cabbage;
    cin >> T;
    int x, y;
    
    for (size_t i = 0; i < T; ++i) {
        memset(map, 0, sizeof(map));
        memset(c, 0, sizeof(c));
        cnt = 0;
        cin >> M >> N >> cabbage;

        for (size_t j = 0; j < cabbage; ++j) {
            cin >> x >> y;
            map[x][y] = 1;  

        }

        for (size_t j = 0; j < M; ++j) {
            for (size_t k = 0; k < N; ++k) {
                if (c[j][k] == 0 && map[j][k] == 1) {

                    ++cnt;
                    bfs(j, k);
                    
                    
                }
                    
            }
        }

        cout << cnt << endl;
    
    }
    


    return 0;
}
*/

/*
#include <iostream>
#include <algorithm>
#include <queue>
#include <cmath>
#include <cstdlib>
#include <cstring>
using namespace std;
//boj16234
int N;
int L, R;

int map[50][50] = { 0, };
int c[50][50] = { 0, };
int open[50][50] = { 0, };
int dir[4][2] = {
    {1,0},
    {-1,0},
    {0,1},
    {0,-1}
};




bool isInside(int x, int y) {
    
    return (x >= 0 && x < N) && (y >= 0 && y < N);
}

bool isOpen(int x, int y) {
    int next_row, next_col;
    int diff;
    for (size_t i = 0; i < 4; ++i) {
        next_row = x + dir[i][0];
        next_col = y + dir[i][1];
        diff = abs(map[next_row][next_col] - map[x][y]);
        if (isInside(next_row, next_col) && diff >= L && diff <= R)
        {
            return true;
        }
        
    }
    return false;
}
void bfs(int x, int y) {
    int cur_row = x;
    int cur_col = y;

    int sum = 0;
    int cnt = 0;

    queue<pair<int, int>> q;
    queue<pair<int, int>> q2;
    q.push(pair<int,int>(cur_row, cur_col));
    q2.push(pair<int, int>(cur_row, cur_col));
    c[cur_row][cur_col] = 1;
    while (!q.empty()) {

        cur_row = q.front().first;
        cur_col = q.front().second;

        q.pop();

        sum += map[cur_row][cur_col];
        ++cnt;

        for (size_t i = 0; i < 4; ++i) {

            int next_row = cur_row + dir[i][0];
            int next_col = cur_col + dir[i][1];

            if (isInside(next_row, next_col) && c[next_row][next_col] == 0) {
                int diff = abs(map[cur_row][cur_col] - map[next_row][next_col]);
                if (diff >= L && diff <= R) {
                    c[next_row][next_col] = 1;
                    q.push(pair<int, int>(next_row, next_col));
                    q2.push(pair<int, int>(next_row, next_col));


                }
            }
        }
    }

        int value = sum / cnt;
        while (!q2.empty()) {
            
            int row = q2.front().first;
            int col = q2.front().second;
            q2.pop();
            map[row][col] = value;
        
            
        }



    
    




}
int main() {

    int day = 0;
    bool check = true;

    cin >> N >> L >> R;

    for (size_t i = 0; i < N; ++i) {

        for (size_t j = 0; j < N; ++j) {
        
            cin >> map[i][j];
        
        }

    }

    
    while (check) {
        check = false;
        for (size_t i = 0; i < N; ++i) {
            for (size_t j = 0; j < N; ++j) {

                if (c[i][j] == 0 && isOpen(i, j)) {
                    bfs(i,j);
                    check = true;
                }

            }
        }
        if (check == true) {
            ++day;
        }
        
        memset(c, false, sizeof(c));

    }
    cout << day;


    return 0;

}
*/



/*
#include <iostream>
#include <algorithm>
#include <queue>
#include <cstring>
//BOJ 10026
using namespace std;

int cnt = 0;
int n;
char map[100][100] = { 0, };
int c[100][100] = { 0, };

int dir[4][2] = {
    {0,1},
    {0,-1},
    {1,0},
    {-1,0}


};


bool isInside(int x, int y) {
    return ((x >= 0 && x < n) && (y >= 0 && y < n));

}
void bfs(int i, int j) {



    int cur_row = i;
    int cur_col = j;
    queue<pair<int, int>> q;
    q.push(pair<int, int>(cur_row, cur_col));
    c[cur_row][cur_col] = 1;



    while (!q.empty()) {
        cur_row = q.front().first;
        cur_col = q.front().second;
        q.pop();




        for (size_t i = 0; i < 4; ++i) {
            int next_row = cur_row + dir[i][0];
            int next_col = cur_col + dir[i][1];
            if (isInside(next_row, next_col) && c[next_row][next_col] == 0)
            {
                if (map[cur_row][cur_col] == map[next_row][next_col]) {

                    q.push(pair<int, int>(next_row, next_col));
                    c[next_row][next_col] = 1;

                }


            }

        }





    }


}

int main() {



    cin >> n;

    for (size_t i = 0; i < n; ++i) {
        for (size_t j = 0; j < n; ++j) {

            cin >> map[i][j];

        }

    }



    for (size_t i = 0; i < n; ++i) {
        for (size_t j = 0; j < n; ++j) {
            if (c[i][j] == 0) {

                bfs(i, j);
                ++cnt;

            }

        }
    }

    cout << cnt << " ";

    cnt = 0;
    memset(c, 0, sizeof(c));




    for (size_t i = 0; i < n; ++i) {

        for (size_t j = 0; j < n; ++j) {

            if (map[i][j] == 'G' || map[i][j] == 'R') {
                map[i][j] = '1';
            }

            else {
                map[i][j] = '0';
            }

        }
    }


    for (size_t i = 0; i < n; ++i) {

        for (size_t j = 0; j < n; ++j) {

            if (c[i][j] == 0) {
                bfs(i, j);
                ++cnt;

            }


        }

    }


    cout << cnt;





    return 0;
}*/

/*
#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>
//BOJ 18405
using namespace std;



int n;
int k;
int row, col;
int map[200][200] = { 0, };
int s, x_t, y_t;
priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> q;


int dir[4][2] = {
    {-1,0},
    {1,0},
    {0,1},
    {0,-1}

};

bool isInside(int x, int y) {


    return (x >= 0 && x < n) && (y >= 0 && y < n);
}


void bfs() {

    priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> temp;
    //바로 위에 있는 temp큐를 전역변수로 선언하면 bfs함수 호출마다 초기화가 안되어서 점점 커져 시간초과가 뜸

    while (!q.empty()) {

        int number = q.top().first;
        int cur_row = q.top().second.first;
        int cur_col = q.top().second.second;

        q.pop();


        for (size_t i = 0; i < 4; ++i) {

            int next_row = cur_row + dir[i][0];
            int next_col = cur_col + dir[i][1];


            if (isInside(next_row, next_col) && map[next_row][next_col] == 0) {

                map[next_row][next_col] = number;
                temp.push(make_pair(number, make_pair(next_row, next_col)));


            }
        }

    }
    q = temp;

}





int main() {


    cin >> n >> k;

    for (size_t i = 0; i < n; ++i) {

        for (size_t j = 0; j < n; ++j) {

            cin >> map[i][j];
            if (map[i][j] != 0) {

                q.push(make_pair(map[i][j], make_pair(i, j)));



            }


        }
    }

    cin >> s >> x_t >> y_t;

    for (size_t i = 0; i < s; ++i) {
        bfs();
    }





    cout << map[x_t - 1][y_t - 1];

    return 0;

}
*/

/*

#include <iostream>
#include <algorithm>
//boj 10844
using namespace std;


long long dp[101][101] = { 0, };

int main() {

    int n;
    long long sum = 0;
    cin >> n;
    dp[1][0] = 0;
    for (size_t i = 1; i <= 9; ++i) {
        dp[1][i] = 1;
        
    }

    for (size_t i = 2; i <= n; ++i) {

        for (size_t j = 0; j <= 9; ++j) {
            
            if (j == 9 || j == 0) {
                if (j == 9)
                    dp[i][j] = dp[i - 1][j - 1] % 1000000000;
                else
                    dp[i][j] = dp[i - 1][j + 1] % 1000000000;
            }
            else {
                dp[i][j] = dp[i - 1][j - 1] % 1000000000 + dp[i - 1][j + 1] % 1000000000;
            }
           

        }
        
        

    }


    for (int i = 0; i < 10; ++i) {
    
        sum += dp[n][i] % 1000000000;

    }


    cout << sum % 1000000000;

    return 0;
}*/


/*
#include <iostream>
#include <algorithm>
//boj 11057
using namespace std;

long long dp[1000][10] = { 0, };

int main() {

    int n;
    long long sum = 0;
    cin >> n;

    for (size_t i = 0; i < 10; ++i) {
        
        dp[1][i] = 1;
    
    }
    

    for (size_t i = 0; i <= n; ++i) {
        
        dp[i][0] = 1;
    
    }

    for (size_t i = 2; i <= n; ++i) {
        
        for (size_t j = 1; j < 10; ++j) {
            

            dp[i][j] = dp[i - 1][j] + dp[i][j - 1] % 10007;

        }
        

    }

    for(size_t i = 0; i<=9; ++i) {
        
        sum += dp[n][i] % 10007;
        
    }
    cout << sum % 10007;

    return 0;

}
*/

/*
#include <iostream>
#include <algorithm>

//boj 11053
using namespace std;
int dp[1000] = { 0, };
int arr[1000] = { 0, };
int main() {


    int n;
    int result = 0;

    cin >> n;

    for (size_t i = 0; i < n; ++i) {
    
        cin >> arr[i];

    }

    for (size_t i = 0; i < n; ++i) {
    
        dp[i] = 1;
    
    }

    for (size_t i = 0; i < n; ++i) {
        

        for (size_t j = 0; j < i; ++j) {
            if (arr[i] > arr[j]) {
                
                dp[i] = max(dp[i], dp[j] + 1);
            
            }
        }
    }


    for (size_t i = 0; i < n; ++i) {
    
        result = max(dp[i], result);

    }


    cout << result;
    return 0;
}*/



/*
#include <iostream>
#include <algorithm>
//boj11055

using namespace std;
int dp[1000] = { 0, };
int arr[1000] = { 0, };

int main() {

    int n;
    int result = 0;
    cin >> n;


    for (size_t i = 0; i < n; ++i) {
    
        cin >> arr[i];
    
    }
    
    for (size_t i = 0; i < n; ++i) {
        
        dp[i] = arr[i];
        
        for (size_t j = 0; j < i; ++j) {
            
            if(arr[i] > arr[j]) {
                dp[i] = max(dp[i], dp[j] + arr[i]);
            }

        }
    
    }


    for (size_t i = 0; i < n; ++i) {
        
        result = max(result, dp[i]);
    
    }
        
    cout << result;

    return 0;
}

*/

/*
#include <iostream>
#include <algorithm>
//boj 11722
using namespace std;
int dp[1000] = { 0, };
int arr[1000] = { 0, };
int main() {  

    int n;
    cin >> n;
    int result = 0;

    for (size_t i = 0; i < n; ++i) {
    
        cin >> arr[i];
        dp[i] = 1;
    
    }


    for (size_t i = 0; i < n; ++i) {
        
        for (size_t j = 0; j < i; ++j) {
        
            if (arr[i] < arr[j])
            {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        
        }
    
    
    }


    for (size_t i = 0; i < n; ++i) {
    
        
        result = max(result, dp[i]);
    
    }

    cout << result;

    return 0;

}
*/

/*2293
#include <iostream>
#include <algorithm>

using namespace std;

int arr[101] = { 0, };
int dp[10001] = { 0, };



int main() {

    int repeat, num;

    cin >> repeat >> num;

    for (size_t i = 1; i <= repeat; ++i) {
    
        cin >> arr[i];

    }


    dp[0] = 1;



    for (size_t i = 1; i <= repeat; ++i) {
    
        for (size_t j = arr[i]; j <= num; ++j) {

            dp[j] += dp[j - arr[i]];

        }
    }


    
    cout << dp[num];

    return 0;

}

*/



/*
#include <iostream>
#include <algorithm>
#include <queue>
//boj 7569
using namespace std;


int for_exit = 0;
int result = 0;
int day = 0; 
int check = 0;
int space_empty = 0;
queue<pair<int, pair<int, int>>> q;
int arr[101][101][101] = { 0, };
int c[101][101][101] = { 0, };
int dir[6][3] = {
    {1,0,0},
    {-1,0,0},
    {0,1,0},
    {0,-1,0},
    {0,0,1},
    {0,0,-1}
};

bool isInside(int x, int y, int z) {

    return (x >= 1 && x < 101) && (y >= 1 && y < 101) && (z >= 1 && z < 101);
}

void bfs() 
{
    while (!q.empty()) {
        int cur_z = q.front().first;
        int cur_x = q.front().second.first;
        int cur_y = q.front().second.second;
        q.pop();
        
        for (size_t i = 0; i < 6; ++i) {
        
            int next_z = cur_z + dir[i][0];
            int next_x = cur_x + dir[i][1];
            int next_y = cur_y + dir[i][2];
            if(isInside(next_z, next_x, next_y) == 1 && arr[next_z][next_x][next_y] == 0 && c[next_z][next_x][next_y] == -1) {
                    
                c[next_z][next_x][next_y] = c[cur_z][cur_x][cur_y] + 1;
                q.push(make_pair(next_z, make_pair(next_x, next_y)));
                arr[next_z][next_x][next_y] = 1;
                



            }
        
        
        }
    
    
    
    
    }
    


}

int main() {

    int m, n, h;

    cin >> m >> n >> h;

    for (size_t i = 1; i <= h; ++i) {
 
        for (size_t j = 1; j <=n; ++j) {

            for (size_t k = 1; k <= m; ++k) {
   
                cin >> arr[i][j][k];
                if (arr[i][j][k] == 1) {
                    q.push(make_pair(i, make_pair(j, k)));
                    c[i][j][k] = 0;
                }
                else if (arr[i][j][k] == 0) {
                    
                    ++check;
                    c[i][j][k] = -1;
                    
                }

                else if (arr[i][j][k] == -1) {
                    
                    ++space_empty;
                    c[i][j][k] = -1;
                
                }

            }
 
        }
    }


    if (check == 0) {
        
        cout << 0;
        return 0;
    
    }

    bfs();


    for (size_t i = 1; i <= h; ++i) {

        for (size_t j = 1; j <= n; ++j) {

            for (size_t k = 1; k <= m; ++k) {

                result = max(result, c[i][j][k]);
                if (arr[i][j][k] == 0)
                {
                    result = -1;
                    for_exit = 1;
                    break;
                }

            }

            if (for_exit == 1)
                break;
        }
        if (for_exit == 1)
            break;
    }

    cout << result;

    return 0;

}
*/



/*
#include <iostream>
#include <algorithm>

//boj 2294
using namespace std;

int arr[101] = { 0, };
int dp[100001] = { 0, };
int coin[100001] = { 0, };
int main() {

    int n, sum;
    size_t input = 0;
    cin >> n >> sum;

    for (size_t i = 0; i < n; ++i) {
        
        cin >> arr[i];
        
    
    }


    for (size_t i = 1; i < 100001; ++i) {
        dp[i] = 100001;
        //dp[0] = 1; 
    }

 
    for (int i = 0; i < n; ++i) {
        
        for (int j = arr[i]; j <= sum; ++j) {
            
            dp[j] = min(dp[j], 1 + dp[j - arr[i]]);
        }
    
    
    }


    if (dp[sum] == 100001) {
        
        cout << "-1";
        return 0;
    
    }
    cout << dp[sum];


    

    return 0;
}*/


/*
#include <iostream>
#include <algorithm>
#include <string>

//boj 16719

using namespace std;
int c[100] = { 0, };
string input;


void solve(string str, int l, int r) {

    int new_l = l;

    for (int i = l; i < r; ++i) {
        
        if (str.at(new_l) > str.at(i)) {
            new_l = i;

        }
    }
    c[new_l] = 1;
    for (int i = 0; i < str.length(); ++i) {
        
        if (c[i] == 1) {
            
            cout << str.at(i);
        }
    
    }
    cout << endl;


    if (new_l + 1 < r) {
        
        solve(str, new_l + 1, r);
    }
    if (new_l - 1 >= l) {
    
        solve(str, l, new_l);

    }

}
int main() {

    cin >> input;

    
    solve(input, 0, input.length());

    return 0;
}


*/




/*
#include <iostream>
#include <algorithm>

//boj 2096

using namespace std;

int input[3];
int max_dp[3];
int min_dp[3];

int  main() {

    int repeat;
    cin >> repeat;

    cin >> input[0] >> input[1] >> input[2];
    for (int i = 0; i < 3; ++i) {
        max_dp[i] = min_dp[i] = input[i];
    }


    for (int i = 1; i < repeat; ++i) {
        
        cin >> input[0] >> input[1] >> input[2];
        
        
        int max_tmp_0 = max_dp[0];
        int min_tmp_0 = min_dp[0];

        int max_tmp_1 = max_dp[1];
        int min_tmp_1 = min_dp[1];

        int max_tmp_2 = max_dp[2];
        int min_tmp_2 = min_dp[2];

        


        max_dp[0] = input[0] + max(max_tmp_0, max_tmp_1);
        max_dp[1] = input[1] + max(max_tmp_0,max(max_tmp_1, max_tmp_2));
        max_dp[2] = input[2] + max(max_tmp_2, max_tmp_1);
        
        min_dp[0] = input[0] + min(min_tmp_0, min_tmp_1);
        min_dp[1] = input[1] + min(min_tmp_0, min(min_tmp_1, min_tmp_2));
        min_dp[2] = input[2] + min(min_tmp_2, min_tmp_1);


    }
        
    cout << max(max(max_dp[0], max_dp[1]), max_dp[2]) << " " << min(min(min_dp[0], min_dp[1]), min_dp[2]);








    return 0;

}
*/


/*
#include <iostream>
#include <string>
#include <algorithm>

//boj 17609
using namespace std;


string input[30];
int main() {

    int repeat;
    size_t str_len;

    int end;
    int start;
    int tmp = 0;

    cin >> repeat;

    for (int i = 0; i < repeat; ++i) {
        
        cin >> input[i];
    
    }
        
    for (int i = 0; i < repeat; ++i) {
        
         end = str_len = input[i].length() - 1;
         start = 0;
         tmp = 0;

        for (int j = 0; j <= str_len / 2; ++j) {
            
            if (input[i].at(start) == input[i].at(end)) {
                ++start;
                --end;
            }
                

            else if (input[i].at(start) != input[i].at(end)) {
                
                if (input[i].at(start) == input[i].at(end - 1)) {
                    --end;
                    ++tmp;

                }
                else if (input[i].at(start + 1) == input[i].at(end)) {
                    
                    ++start;
                    ++tmp;

                }

                else { 
                    tmp = 2;
                    break;
                }
            
            }
        
        
        
        
        }

        if (tmp >= 2) {
            end = str_len = input[i].length() - 1;
            start = 0;
            tmp = 0;

            for (int j = 0; j <= str_len / 2; ++j) {

                if (input[i].at(start) == input[i].at(end)) {
                    ++start;
                    --end;
                }


                else if (input[i].at(start) != input[i].at(end)) {

                    if (input[i].at(start + 1) == input[i].at(end)) {
                        ++start;
                        ++tmp;

                    }
                    else if (input[i].at(start) == input[i].at(end) - 1) {
                        --end;
                        ++tmp;
                        

                    }

                    else {
                        tmp = 2;
                        break;
                    }

                }




            }

           


        }

        


        if (tmp >= 2) {
            
            cout << 2;
            cout << endl;
        
        }
        else {
            
            cout << tmp;
            cout << endl;
        
        }

    
    
    }



    return 0;
}

*/



/*
#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

//boj 2118
int cost[50000] = { 0, };

int main() {


    int repeat;
    int sum = 0;
    int answer = 0;

    int tmp_1 = 0;
    int tmp_2 = 0;

    cin >> repeat; 

    for (int i = 0; i < repeat; ++i) {
        
        cin >> cost[i];
        sum += cost[i];
    

    }

    tmp_1 = cost[0];
    tmp_2 = sum - cost[0];

    

    int a = 0; 
    int b = 1;

    while (a < repeat) {
    
        answer = max(answer, min(tmp_1, tmp_2));
        if (tmp_1 >= tmp_2) {
            
            tmp_1 -= cost[a];
            tmp_2 += cost[a]; 
            ++a;
            continue;
        
        }

        tmp_1 += cost[b];
        tmp_2 -= cost[b];
        ++b;
        b %= repeat;

    
    
    
    }

    cout << answer;

    return 0;                              
}

*/



/*
#include <iostream>
#include <algorithm>
#include <queue>
#include <cstring>

//boj 2589
using namespace std;

char map[50][50] = { 0, };
int c[50][50] = { 0, };
int result[50][50] = { 0, };
int row, col;
int max_tmp = 0;
int tmp = 0;

int dir[4][2] = {
    {-1,0},
    {0,1},
    {0,-1},
    {1, 0}
};

bool isInside(int i, int j) {

    
    return (i < row && i >= 0) && (j < col && j >= 0);

}


int bfs(int i, int j) {
    
    queue<pair<int,int>> q;
    q.push({i,j});

    result[i][j] = 1;
    c[i][j] = 1;

    while (!q.empty()) {
        
        int cur_row = q.front().first;
        int cur_col = q.front().second;
        q.pop();

        for(int i = 0; i < 4; ++i) {
            
            int next_row = cur_row + dir[i][0];
            int next_col = cur_col + dir[i][1];

            if (isInside(next_row, next_col) && c[next_row][next_col] == 0 && map[next_row][next_col] == 'L') {
                
                c[next_row][next_col] = 1;
                result[next_row][next_col] = result[cur_row][cur_col] + 1;
                q.push({ next_row, next_col });
                if (max_tmp < result[next_row][next_col]) {
                    
                    max_tmp = result[next_row][next_col];
                }
               
            
            }
        
        }
        
        
    
    }

    return max_tmp - 1;

}
int main() {

    int answer = 0;

    cin >> row >> col;

    for (int i = 0; i < row; ++i) {
        
        for (int j = 0; j < col; ++j) {
        
            cin >> map[i][j];
        
        
        }
    
    }
    
    for (int i = 0; i < row; ++i) {

        for (int j = 0; j < col; ++j) {
            if (map[i][j] == 'L') {
                tmp = bfs(i, j);
                answer = max(answer, tmp);
                memset(c, 0, sizeof(c[0][0]) * 50 * 50);
            }

        }

    }

    cout << answer;

    return 0;
}*/


/*
#include <iostream>
#include <algorithm>
//boj 2225
using namespace std;
int dp[201][201] = { 0, };
int main() {

    int n, k;
    cin >> n >> k;


    for (int i = 1; i <= n; ++i) {
       
        for (int j = 1; j <= k; ++j) {
            

            if (i == 1) {

                dp[i][j] = j;
                continue;
            
            }
            if (j == 1) {

                dp[i][j] = 1;
                continue;
            }

            dp[i][j] = (dp[i - 1][j] + dp[i][j - 1]) % 1000000000;

        
        
        }

    
    }

    cout << dp[n][k];



    return 0;

}

*/



/*
#include <iostream>
#include <algorithm>

//boj 2212
using namespace std;

int sensor[10000] = { 0, };
int diff[10000] = { 0, };

int main() {

    
    int repeat;
    int tollcenter;
    int answer = 0;

    cin >> repeat;

    cin >> tollcenter;


    for (int i = 0; i < repeat; ++i) {
       
        cin >> sensor[i];
    
    }


    sort(sensor, sensor + repeat);


    for (int i = 0; i < repeat - 1; ++i) {
    
        diff[i] = sensor[i + 1] - sensor[i];

    
    }

    sort(diff, diff + repeat - 1, greater<int>());

        
    for (int i = 0; i < repeat - 1; ++i) {
    
        if (i < tollcenter - 1 )
            continue;
        answer += diff[i];

    
    
    }

    cout << answer;

    return 0;
}
*/



/*
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
//boj 12904

int main() {

    string str1;
    string str2;

    cin >> str1;
    cin >> str2;

    while (str1.length() != str2.length()) {
        
        if (str2.back() == 'A') {
            
            str2.pop_back();

        
        }
        
        else if (str2.back() == 'B') {
            
            str2.pop_back();
            reverse(str2.begin(), str2.end());
        
        }
    
    
    
    }

    if (str1.compare(str2) == 0) {
    
        cout << 1;
        return 0;

    }

    cout << 0;






    return 0;

}
*/

/*
#include <iostream>
#include <algorithm>
//boj 11509

using namespace std;

int balloons[1000001] = { 0, };


int main() {

    int repeat;
    int input;
    int answer = 0;

    cin >> repeat;

    for (int i = 0; i < repeat; ++i) {

        cin >> input;
        if (balloons[input + 1] == 0)
        {
            //현재 맞출 풍선의 높이보다 1만큼 더 높은 풍선의 화살이 없다면 == 간접적으로 풍선을 터트릴 수 없다면
            //화살 하나 새로 사용해서 터트리고 해당 높이의 화살이 있음을 체크 
            ++balloons[input];
            ++answer;
            continue;
        }

        //현재 터뜨릴 풍선의 높이보다 1만큼 더 높은 풍선의 화살이 있다면
        //기존의 화살을 소비하여 현재 풍선을 터트림
        ++balloons[input];
        --balloons[input + 1];

    }

    cout << answer;

    return 0;
}
*/


/*
#include <iostream>
#include <algorithm>

//boj 17216
using namespace std;
int arr[1000] = { 0, };
int dp[1000] = { 0, };
int main() {

    int input;
    int result = 0;

    cin >> input;

    for (size_t i = 0; i < input; ++i) {
    
        cin >> arr[i];
    
    
    }

    for (size_t i = 0; i < input; ++i) {
        
        dp[i] = arr[i];
        for (size_t j = 0; j < i; ++j) {
        
            
            if (arr[i] < arr[j]) {

                dp[i] = max(dp[i], dp[j] + arr[i]);
                    
            }
        
        }
    
    }

    for (size_t i = 0; i < input; ++i) {
    
        result = max(result, dp[i]);
    
    }

    cout << result;





    return 0;

}*/


/*
#include <iostream>
#include <algorithm>
#include <vector>

//boj 2565
using namespace std;

vector<pair<int, int>> v;
int dp[100] = { 0, };

int main() {

    int num;
    int input1, input2;
    int result = 0;


    cin >> num;

    for (size_t i = 0; i < num; ++i) {

        cin >> input1 >> input2;
        v.push_back({ input1, input2 });
    
    }

    sort(v.begin(), v.end());

    for (size_t i = 0; i < num; ++i) {
    
        for (size_t j = 0; j < i; ++j) {
        
            if (v.at(i).second > v.at(j).second) {
                
                dp[i] = max(dp[i], dp[j] + 1);
            
            }

        
        }
        
    
    
    }



    for (size_t i = 0; i < num; ++i) {
        
        result = max(result, dp[i]);
    
    }

    cout << num - result - 1;




    return 0;

}
*/



/*
#include <iostream>
#include <algorithm>
#include <climits>

//boj 2230
//문제 풀이 주의
//포인터 방향을 왼쪽 끝과 오른쪽 끝으로 설정할 경우
//두 수의 차가 문제에서 원하는 차이값 이상일 시
//왼쪽 포인터가 오른쪽으로, 오른쪽 포인터가 왼쪽으로 가는 경우에 따라
//결과가 달라지기 때문에 포인터 방향을 왼쪽에서 오른쪽으로 통일해야 풀림


using namespace std;

int arr[100000] = { 0, };
int arr2[50000] = { 0, };
int main() {

    int num, diff;
    int result = INT_MAX;
    int tmp = 0;
    cin >> num >> diff;
    int first_cur = 0;
    int sec_cur = 0;

    for (size_t i = 0; i < num; ++i) {

        cin >> arr[i];

    }
    
    sort(arr, arr + num);


    while (sec_cur < num) {

        tmp = arr[sec_cur] - arr[first_cur];
        if (tmp == diff) {
            cout << tmp;
            return 0;

        }

        if (tmp < diff)
            ++sec_cur;
        else {
            ++first_cur;
            result = min(tmp, result);
        }
        


        

    }

    cout << result;


    return 0;
}*/


/*
#include <iostream>
#include <algorithm>
#include <queue>
#include <cstring>

//boj 2573
using namespace std;

int n, m;
int times = 0;
int cnt = 0;
int map[300][300] = { 0, };
int tmp[300][300] = { 0, };
int c[300][300] = { 0, };
int dir[4][2] = {
    {0, 1},
    {0, -1},
    {1, 0},
    {-1, 0}
};

bool isInside(int x, int y) {

    return (x >= 0 && x < n) && (y >= 0 && y < m);

}
void bfs(int x, int y) {
    queue<pair<int, int>> q;
    q.push({ x, y });

    while (!q.empty()) {

        int cur_row = q.front().first;
        int cur_col = q.front().second;
        q.pop();

        for (size_t i = 0; i < 4; ++i) {

            int next_row = cur_row + dir[i][0];
            int next_col = cur_col + dir[i][1];

            if (isInside(next_row, next_col) && map[next_row][next_col] != 0 && !c[next_row][next_col]) {
                q.push({ next_row, next_col });
                c[next_row][next_col] = 1;

            }

        }


    }


}


void melt_iceberg() {
    memset(tmp, 0, sizeof(tmp));

    for (size_t current_row = 0; current_row < n; ++current_row) {

        for (size_t current_col = 0; current_col < m; ++current_col) {
            int water = 0;
            if (map[current_row][current_col] != 0) {

                for (size_t i = 0; i < 4; ++i) {

                    int next_row = current_row + dir[i][0];
                    int next_col = current_col + dir[i][1];
                    if (isInside(next_row, next_col) == 1 && map[next_row][next_col] == 0) {

                        ++water;
                    }

                }


            }

            int value = map[current_row][current_col] - water;
            if (value > 0) tmp[current_row][current_col] = value;
            if (value < 0) tmp[current_row][current_col] = 0;
        }
    }

    for (size_t i = 0; i < n; ++i) {

        for (size_t j = 0; j < m; ++j) {

            map[i][j] = tmp[i][j];

        }
    }


}


int main() {



    cin >> n >> m;


    for (size_t i = 0; i < n; ++i) {


        for (size_t j = 0; j < m; ++j) {


            cin >> map[i][j];

        }


    }


    while (1) {

        cnt = 0;
        for (size_t i = 0; i < n; ++i) {

            for (size_t j = 0; j < m; ++j) {
                if (!c[i][j] && map[i][j] != 0) {

                    bfs(i, j);
                    ++cnt;


                }


            }


        }



        if (cnt == 0) {
            cout << 0;
            return 0;
        }



        else if (cnt >= 2) {

            cout << times;
            return 0;

        }


        ++times;
        melt_iceberg();

        memset(c, 0, sizeof(c));




    }






    return 0;


}*/


/*
#include <iostream>
#include <algorithm>
#include <cstring>

//boj 9084
using namespace std;

int coin[21] = { 0, };
int dp[10001] = { 0, };


int main() {

    int testcase, n, goal;

    cin >> testcase;

    for (size_t i = 0; i < testcase; ++i) {
        
        cin >> n;

        for (size_t j = 1; j <= n; ++j) {
            cin >> coin[j];
        }

        cin >> goal;

        dp[0] = 1;
        //
        
        for (size_t i = 1; i <= n; ++i) {
            
            for (size_t j = coin[i]; j <= goal; ++j) {
            
                dp[j] = dp[j] + dp[j - coin[i]];
            
            
            }
        
        }



        //


        cout << dp[goal] << endl;


        memset(dp, 0, sizeof(dp));
        memset(coin, 0, sizeof(coin));
    }
    



    return 0;

}*/

/*
#include <iostream>
#include <algorithm>
//boj 12865
using namespace std;

int dp[101][100001] = { 0, };

int item[2][101] = { 0, };


int main() {


    int n, weight;

    cin >> n >> weight;

    for (size_t i = 1; i <= n; ++i) {
        
        cin >> item[0][i] >> item[1][i];
    
    }

    //바로 아래 루프에 i j 변수 타입을 size_t로 하면 j - item[0][1]비교시 unsigned형태라 언더플로시 0보다 무조건 크므로 원하는 비교가 안되기 때문에 부호가 있는 정수형 타입을 써야함
    for (int i = 1; i <= n; ++i) {
        
        for (int j = 1; j <= weight; ++j) {
            
            if (j - item[0][i] >= 0) {
                
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - item[0][i]] + item[1][i]);
            
            }

            else {
                
                dp[i][j] = dp[i - 1][j];
            
            }
        
        
        }

        
    
    }




    cout << dp[n][weight];



    return 0;

}*/


/*
#include <iostream>
#include <algorithm>

using namespace std;

//boj 14728
int chpt[2][101] = { 0, };
int dp[101][10001] = { 0, };   
int main() {

    int num;
    int overall;
    cin >> num >> overall;

    for (size_t i = 1; i <= num; ++i) {
        
        cin >> chpt[0][i] >> chpt[1][i];
    
    }


    for (int i = 1; i <= num; ++i) {
        
        for (int j = 1; j <= overall; ++j) {
            
            if (j - chpt[0][i] >= 0) {
                
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - chpt[0][i]] + chpt[1][i]);
            
            }

            else {
                dp[i][j] = dp[i - 1][j];
            }

        }

    }



    cout << dp[num][overall];


    return 0;
}*/


/*
#include <iostream>
#include <algorithm>
#include <vector>
//boj 1092
using namespace std;

vector<int> crane;
vector<int> box;
//int crane[50] = {0,};
//int box[10000] = {0,};
int main() {

    int n;
    int m;
    int input1, input2;
    cin >> n;
    for (size_t i = 0; i < n; ++i) {
        cin >> input1;
        crane.push_back(input1);

    }
    sort(crane.begin(), crane.end());
    
    cin >> m;
    for (size_t i = 0; i < m; ++i) {
        cin >> input2;
        box.push_back(input2);
    }

    sort(box.begin(), box.end());


    //

    if (crane[n - 1] < box[m - 1]) {

        cout << -1;
        return 0;

    }

    int cnt = 0;
    // 배열 기반으로 풀다가 계속 시간초과 나서 구현 쉬운 벡터 기반으로 변경
    while (!box.empty()) {


        ++cnt;
        //평소 쓰던 대로 size_t 쓰면 인덱스 에러임 함부로 size_t 남발 금지
        for (int i = crane.size() - 1; i >= 0; --i) {

            for (int j = box.size() - 1; j >= 0; --j) {

                if (crane[i] >= box[j]) {
                    box.erase(box.begin() + j);
                    break;

                }

            }

        }

    }




    cout << cnt;



    //
    return 0;


}*/


/*
#include <iostream>
#include <algorithm>
#include <queue>
#include <stdio.h>
//boj 21736
using namespace std;

char map[600][602] = { 0, };
int visited[600][600] = { 0, };

int dir[4][2] = {
    {0,1},
    {0,-1},
    {-1,0},
    {1, 0}
};

int height, width;
int cnt = 0;

bool isInside(int x, int y) {
    return (x < width&& x >= 0) && (y < height&& y >= 0);
}

void bfs(int x, int y) {

    queue<pair<int, int>> q;
    q.push({ x, y });
    visited[y][x] = 1;

    while (!q.empty()) {

        int cur_x = q.front().first;
        int cur_y = q.front().second;

        q.pop();

        for (size_t i = 0; i < 4; ++i) {

            int next_x = cur_x + dir[i][0];
            int next_y = cur_y + dir[i][1];

            if (isInside(next_x, next_y) == false) continue;
            if (visited[next_y][next_x] == true) continue;

            visited[next_y][next_x] = 1;

            if (map[next_y][next_x] != 'X') {
                q.push({ next_x, next_y });

                if (map[next_y][next_x] == 'P')  ++cnt;
            }

        }


    }


}



char buffer[1024], * endptr;
int main() {
    fgets(buffer, 1024, stdin);
    height = strtol(buffer, &endptr, 10);
    width = atoi(endptr + 1);

    int loc_x, loc_y;


    for (size_t i = 0; i < height; i++) {
        fgets(map[i], 602, stdin);
    }

    for (size_t i = 0; i < height; ++i) {

        for (size_t j = 0; j < width; ++j) {
            if (map[i][j] == 'I') {

                loc_x = j;
                loc_y = i;
                break;
            }

        }

    }




    bfs(loc_x, loc_y);

    if (cnt == 0)  cout << "TT";
    else {
        cout << cnt;
    }

    return 0;

}
*/


/*
#include <iostream>
#include <algorithm>
#include <queue>
//boj 14940
using namespace std;

int height, width;
int map[1000][1000] = { 0, };
int visited[1000][1000] = { 0, };
int mov_dir[4][2] = {
    {0,1},
    {1,0},
    {0,-1},
    {-1,0}

};
bool isInside(int x, int y) {
    return (x < width && x >= 0) && (y < height && y >= 0);

}
void bfs(int x, int y) {

    queue<pair<int, int>> q;
    q.push({ x,y });
    visited[y][x] = 1;

    while (!q.empty()) {
        
        int cur_x = q.front().first;
        int cur_y = q.front().second;


        q.pop();


        for (size_t i = 0; i < 4; ++i) {
            int next_x = cur_x + mov_dir[i][0];
            int next_y = cur_y + mov_dir[i][1];
            if (isInside(next_x, next_y) == 0) continue;
            if (visited[next_y][next_x] == 1) continue;
            if (map[next_y][next_x] == 0)    continue;
            q.push({ next_x, next_y });
            visited[next_y][next_x] = 1;
            map[next_y][next_x] = map[cur_y][cur_x] + 1;
        
        }
    
    
    
    }


}

int main() {


    int goal_x, goal_y;
    cin >> height >> width;

    for (size_t i = 0; i < height; ++i) {

        for (size_t j = 0; j < width; ++j)
        {
            
            cin >> map[i][j];
            if (map[i][j] == 2)
            {
                goal_x = j;
                goal_y = i;
            }
        
        }
    }

    map[goal_y][goal_x] = 0;
   


    bfs(goal_x, goal_y);
    
    for (size_t i = 0; i < height; ++i) {
        for (size_t j = 0; j < width; ++j) {
            
            if (visited[i][j] == 0 && map[i][j] != 0)  map[i][j] = -1;
        
        }
    }
    
    for (size_t i = 0; i < height; ++i) {
        
        for (size_t j = 0; j < width; ++j) {
            
            cout << map[i][j] << " ";
        
        }
        cout << endl;
    }
    return 0;


}*/


/*
#include <iostream>
#include <algorithm>
#include <vector>

//boj 18870
using namespace std;

int location[1000000] = { 0, };


int main() {
    vector<int> tmp;

    int n;
    cin >> n;
    for (size_t i = 0; i < n; ++i) {
        cin >> location[i];
        tmp.push_back(location[i]);
    }



    sort(tmp.begin(), tmp.end());   

    tmp.erase(unique(tmp.begin(), tmp.end()), tmp.end());

    for (size_t i = 0; i < n; ++i) {
        
       int idx = lower_bound(tmp.begin(), tmp.end(), location[i]) - tmp.begin();
       cout << idx << " ";

    }



    return 0;

}*/



/*
#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

//boj 11724

using namespace std;

int node, edge;
int map[1001][1001] = {0,};
int visited[1001] = { 0, };

void bfs(int node_num) {
    

    queue<int> q;
    q.push(node_num);
    visited[node_num] = 1;

    while (!q.empty()) {
        
        int cur_pos = q.front();
        q.pop();

            
        for (size_t i = 1; i <= node; ++i) {
            if (map[cur_pos][i] == 1 && visited[i] == 0)
            {

                visited[i] = 1;
                q.push(i);

            }

        
        }
    
    
    }


   

}

int main() {

    cin >> node >> edge;
    int input1, input2;
    int cnt = 0;

    //문제 똑바로 읽자 이 문제에서는 무조건 인덱스가 1로 시작해야 한다.
    for (size_t i = 1; i <= edge; ++i) {
        cin >> input1 >> input2;
        map[input1][input2] = 1;
        map[input2][input1] = 1;
    }


    for (size_t i = 1; i <= node; ++i) {
        
        if (visited[i] == 1) continue;
        bfs(i);
        ++cnt;
    
    }


    cout << cnt;



    return 0;

}
*/

/*
#include <iostream>
#include <algorithm>
#include <queue>
#include <functional>

//boj 1927
using namespace std;
int main() {
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    //cout.tie(NULL);
    //c++입출력을 쓸거면 위에 3개로 입출력 최적화를 하던가 c버전 입출력만을 사용해야 시간초과가 안뜸
    priority_queue<int, vector<int>, greater<int>> pq;

    int num;
    cin >> num;
    int input;

    for (size_t i = 0; i < num; ++i) {
        
        scanf("%d",&input);
        //cin >> input;
        if (input == 0) {
            if (!pq.empty()) {
                int tmp = pq.top();
                printf("%d\n",tmp);
                //cout << tmp << "\n";
                pq.pop();
                continue;
            }
            else {
                printf("0\n");
                //cout << 0 << "\n";
            }

        }
        else{
            pq.push(input);

        }
    
    }


        

    return 0;
}
*/


/*
#include <iostream>
#include <algorithm>
//boj 11659
using namespace std;
int input[100010] = { 0, };
int main() {

    int n_inputs, n_sections;
    int section_start, section_end;
    scanf("%d %d", &n_inputs, &n_sections);

    //단순하게 입력값을 받고 입력받은 구간의 범위를 인덱싱해서 더하면 시간 초과 나니까 슬라이딩 윈도우 기법을 사용해야 함.
    for (size_t i = 1; i <= n_inputs; ++i) {
        
        scanf("%d", &input[i]);
        input[i] += input[i - 1];
    }
    

    for (size_t i = 0; i < n_sections; ++i) {
        
        scanf("%d %d", &section_start, &section_end);

        printf("%d\n", input[section_end] - input[section_start - 1]);
    
    }


    return 0;
}*/



/*
#include <algorithm>
#include <iostream>
#include <string>
#include <map>
//boj 1620
using namespace std;

string name;
string pokemon_String[100010];
char buf[32];
int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    map<string, int> pokemon_Map;
    int n, m;
    int input_idx;

    cin >> n >> m;
    for (size_t i = 0; i < n; ++i) {
        cin >> pokemon_String[i];
        pokemon_Map.insert({ pokemon_String[i], i});

    }

    for (size_t i = 0; i < m; ++i) {
        
        cin >> name;
        if (isdigit(name[0]) != 0) {//숫자인 경우
            
            input_idx = stoi(name) - 1;
            cout << pokemon_String[input_idx] <<"\n";
        }


        else {
            auto idx = pokemon_Map.find(name);
            cout << idx->second + 1 << "\n";
                

        
        
        }
    }



    return 0;
}
*/


/*
#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
using namespace std;
//boj 1764
int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    int cnt = 0;
    string input_name;
    map<string, int> no_listen_list;
    vector<string> overlook_list;
    int n, m;

    cin >> n >> m;

    for (size_t i = 0; i < n; ++i) {
        
        cin >> input_name;
        no_listen_list.insert({input_name, true});
    
    }

    for (size_t i = 0; i < m; ++i) {
        
        cin >> input_name;
        if (no_listen_list[input_name]) {
            ++cnt;
            overlook_list.push_back(input_name);
        }
    
    
    }
    cout << cnt << "\n";
    sort(overlook_list.begin(), overlook_list.end());
    for (size_t i = 0; i < overlook_list.size(); ++i) {
        cout << overlook_list.at(i) << "\n";
    }

    return 0;
}*/



/*
#include <iostream>
#include <algorithm>

//boj 11723
// class 3 essential clear
using namespace std;

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(NULL);

    string input_operator;
    int m, input_operand;
    int bit_mask = 0;
    cin >> m;
    for (size_t i = 0; i < m; ++i) {

        cin >> input_operator;
        if (input_operator == "add") {
            cin >> input_operand;
            bit_mask |= (1 << input_operand);
        }

        else if (input_operator == "remove") {
            cin >> input_operand;
            bit_mask &= ~(1 << input_operand);
        }
        else if (input_operator == "check") {
            cin >> input_operand;
            if (bit_mask & (1 << input_operand)) { cout << "1\n"; }
            else { cout << "0\n"; }
        }
        else if (input_operator == "toggle") {
            cin >> input_operand;
            if (bit_mask & 1 << input_operand) { bit_mask &= ~(1 << input_operand); }
            else { bit_mask |= (1 << input_operand); }
        }

        else if (input_operator == "all") { bit_mask = (1 << 21) - 1; }
        else if (input_operator == "empty") bit_mask = 0;
    
    }


    return 0;
}*/


/*
#include <iostream>
#include <algorithm>
#include <queue>
#include <functional>
using namespace std;
//boj 11729
int main() {

    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(NULL);

    int input_times;
    int input_num;
    cin >> input_times;

    priority_queue<int, vector<int>> pq;
    for (size_t i = 0; i < input_times; ++i) {
        
        cin >> input_num;
        if (input_num == 0) {
            if (!pq.empty()) {
                
                int tmp_top = pq.top();
                cout << tmp_top << "\n";
                pq.pop();
                continue;

            
            }
            cout << 0 << "\n";
        
        }
        else {
            pq.push(input_num);

        }

        
    
    }




    return 0;

}
*/


/*
#include <iostream>
#include <algorithm>
//boj 2240
using namespace std;
int plum_list[1001] = { 0, };
int dp[1001][3][31] = { 0, };  // 1001 -> 자두갯수  3 -> 위치  31 -> 횟수

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int plum_num, mov_input;
    cin >> plum_num >> mov_input;
    for (size_t i = 1; i <= plum_num; ++i) {
        cin >> plum_list[i];
    }

    dp[0][1][mov_input] = 0;
    //0초 처음위치 움직일 수 있는 횟수

    for (size_t i = 0; i < plum_num; ++i) {
        for (size_t j = 1; j <= 2; ++j) {
            for (size_t k = 0; k <= mov_input; ++k) {
                if (dp[i][j][k] >= 0) {
                    int next_pos = plum_list[i + 1];
                    if (next_pos == j) {
                        dp[i + 1][j][k] = dp[i][j][k] + 1;
                    }
                    else {
                        if (k != 0) {
                            dp[i + 1][next_pos][k - 1] = max(dp[i + 1][next_pos][k - 1], dp[i][j][k] + 1);
                        }
                        dp[i + 1][j][k] = dp[i][j][k];
                    }
                }
            }
        }
    }

    int answer = 0;
    
    for (size_t i = 1; i <= 2; ++i) {

        for (size_t j = 1; j <= plum_num; ++j) {
        
            answer = max(answer, dp[j][i][0]);
        
        }
        for (size_t j = 0; j <= mov_input; ++j) {
            answer = max(answer, dp[plum_num][i][j]);
        }
    }
    
    
    

    cout << answer;
    return 0;
}
*/



/*
#include <iostream>
#include <algorithm>
#include <vector>
//boj2624
using namespace std;
int money[10010] = { 0, };
int dp[10010][110] = { 0, };

int main() {

    int amount;
    int type_input;
    int input1, input2;
    vector<pair<int, int>> coin;

    cin >> amount >> type_input;
    coin.push_back({ 0,0 });
    //벡터 인덱스 1부터 쓰기 위해서 패딩 추가
    for (size_t i = 1; i <= type_input; ++i) {

        cin >> input1 >> input2;
        coin.push_back({ input1, input2 });
    }

    for (size_t i = 1; i <= type_input; ++i) {

        dp[0][i - 1] = 1;

        int value = coin[i].first;
        int cnt = coin[i].second;

        for (size_t j = 0; j <= amount; ++j) {

            if (dp[j][i - 1] == 0)   continue;
            for (size_t k = 0; k <= cnt; ++k) {
                if (j + k * value > amount)  continue;
                dp[j + k * value][i] += dp[j][i - 1];
            }


        }



    }

    cout << dp[amount][type_input];

    return 0;

}*/


/*
#include <iostream>
#include <algorithm>
#include <climits>
//boj18111
using namespace std;

int map[500][500] = { 0, };
//이 문제 최적화 하고 싶으면 높이 판별을 0 ~ 256이 아니라 입력받은 값 한해서만 하면 될 듯
int main() {

    int n, m;
    int input_inventory;
    int answer_time = INT_MAX;
    int answer_height = 0;    cin.tie(0);
    cout.tie(0);
    ios::ios_base::sync_with_stdio(0);

    cin >> n >> m >> input_inventory;

    for (size_t i = 0; i < m; ++i) {
        for (size_t j = 0; j < n; ++j) {

            cin >> map[j][i];
        }
    }


    for (size_t i = 0; i <= 256; ++i) {
        int cost = 0;
        int inventory = input_inventory;

        for (size_t width = 0; width < m; ++width) {
            for (size_t height = 0; height < n; ++height) {

                if (i == map[height][width])  continue;
                else if (i < map[height][width]) {
                    int block = map[height][width] - i;
                    inventory += block;
                    cost = cost + block * 2;
                }

                else { // i > map[height][width]
                    int block = i - map[height][width];
                    inventory -= block;
                    cost = cost + block;
                }


            }
        }

        if (inventory < 0) {
            continue;
        }

        if (cost < answer_time) {
            answer_time = cost; 
            answer_height = i;

        }
        if (cost == answer_time)
        {
            if (answer_height < i) {
                answer_height = i;
            }
        }





    }

    cout << answer_time << " " << answer_height;

    return 0;
}*/



/*
#include <iostream>
#include <algorithm>
#include <climits>
//boj 14889
using namespace std;
int map[21][21] = { 0 };
int visited[21] = { 0, };
int map_size;
int start_team_score = 0;
int link_team_score = 0;
int diff = 0;
int answer = INT_MAX;

void calculate() {
    start_team_score = 0;
    link_team_score = 0;
    for (size_t i = 1; i <= map_size; ++i) {
        for (size_t j = 1; j <= map_size; ++j) {
            if (visited[i] == 1 && visited[j] == 1) {
                start_team_score += map[i][j];
                
            }
            else if(visited[i] == 0 && visited[j] == 0) {
                link_team_score += map[i][j];
            }
        }
    }
    diff = abs(start_team_score - link_team_score);
    answer = min(answer, diff);

}

void dfs(int cnt, int player) {
    if (cnt == map_size / 2) {
        calculate();
        return;
    }

    for (size_t i = player; i <= map_size; ++i) {
        visited[i] = true;
        dfs(cnt + 1, i + 1);
        visited[i] = false;
        //backtracking
    }
}
int main() {

    cin.tie(NULL);
    cout.tie(NULL);
    ios::ios_base::sync_with_stdio(0);

    

    cin >> map_size;

    for (size_t i = 1; i <= map_size; ++i) {
        for (size_t j = 1; j <= map_size; ++j) {
            cin >> map[i][j];
        }
    }

    

    dfs(0, 1);
        
    cout << answer;







    return 0;

}*/


/*
#include <iostream>
#include <algorithm>
//boj 10157
using namespace std;

int map[1001][1001] = { 0, };
int width, height;

bool isInside(int x, int y) {
    return (x >= 1 && x <= width) && (y >= 1 && y <= height);
}

int mov_dir[2][4] = { {1,0,-1,0}, 
                      {0,1,0,-1} }; 

int main() {
    int waiting_number;

    cin >> width >> height;
    cin >> waiting_number;

    if (waiting_number > width * height) {
        cout << 0;
        return 0;
    }

    int cur_x = 1;
    int cur_y = 1; 
    int idx = 0;

    int y_dir = mov_dir[0][idx];
    int x_dir = mov_dir[1][idx];

    for (int i = 1; i <= waiting_number; i++) {
        map[cur_y][cur_x] = i;

        if (i == waiting_number) {
            cout << cur_x << " " << cur_y;
            return 0;
        }

        int next_x = cur_x + x_dir;
        int next_y = cur_y + y_dir;

        if (!isInside(next_x, next_y) || map[next_y][next_x] != 0) {
            idx = (idx + 1) % 4;
            y_dir = mov_dir[0][idx];
            x_dir = mov_dir[1][idx];
        }

        cur_y += y_dir;
        cur_x += x_dir;
    }

    return 0;
}


*/


/*
#include <iostream>
#include <algorithm>
#include <string>
#include <climits>
#include <cmath>
#include <cstdlib>
//boj 1107
/처음에는 정상인 버튼으로 만들 수 있는 숫자들의 중복순열을 구해서 각각의 중복순열이 이동할 채널에 가장 차이가 적은 숫자를 구하면
//해결이 되는 문제인줄 알았지만 오히려 답지 보니까 생각보다 더 단순한 문제였다..
using namespace std;

int broken_button[10] = { 0, };


bool isBroken(int num) {
    string str = to_string(num);
    for (size_t i = 0; i < str.length(); ++i) {
        if (broken_button[str[i] - '0'] == 1)
            return false;
    }
    return true;
}
int main() {

    int goal_channel;
    int broken_buttons_nums;
    int broken_button_input;
    int min_cost;
    cin >> goal_channel;
    cin >> broken_buttons_nums;

    for (size_t i = 0; i < broken_buttons_nums; ++i) {
        cin >> broken_button_input;
        broken_button[broken_button_input] = 1;

    }

    if(goal_channel == 100) {
        cout << 0;
        return 0;
    }

    min_cost = abs(goal_channel - 100);

    for (int i = 0; i <= 1000000; ++i) {
        if (isBroken(i) == true) {
            int tmp_cost = abs(goal_channel - i) + to_string(i).length();
            min_cost = min(min_cost, tmp_cost);
        }
    }


    cout << min_cost;

    return 0;

}


*/


/*
#include <iostream>
#include <algorithm>
#include <climits>
//boj 13398
using namespace std;

int arr[100001] = { 0, };
int dp[100001] = {0,};
int minus_dp[100001] = { 0, };
int main() {

    cin.tie(0);
    cout.tie(0);
    ios::ios_base::sync_with_stdio(0);

    int input_num;
    int minus_idx_num = 0;
    int answer = INT_MIN;
    cin >> input_num;
    for (size_t i = 0; i < input_num; ++i) {

        cin >> arr[i];
    }

    dp[0] = arr[0];
    minus_dp[0] = arr[0];
    answer = arr[0];
    for (size_t i = 1; i < input_num; ++i) {
        dp[i] = max(dp[i - 1] + arr[i], arr[i]);
        minus_dp[i] = max(dp[i - 1], arr[i] + minus_dp[i - 1]);
        answer = max(answer, max(dp[i], minus_dp[i]));

    }



    cout << answer;

    //for (size_t i = 1; i <= input_num; ++i) {
    //    cin >> arr[i];
    //    dp[i] = max(dp[i - 1] + arr[i], arr[i]);
    //    answer = max(answer, dp[i]);
    //    if (arr[i] < 0) {
    //        minus_idx[minus_idx_num] = i;
    //        ++minus_idx_num;
    //    }
    //
    //}
    //
    //
    //
    //
    //for (size_t i = 0; i < minus_idx_num; ++i) {
    //    int tmp = arr[minus_idx[i]];
    //    arr[minus_idx[i]] = 0;
    //
    //    int localMax = INT_MIN;
    //    int sum = 0;
    //    for (size_t j = 1; j <= input_num; ++j) {
    //        sum = max(sum + arr[j], arr[j]);
    //        localMax = max(localMax, sum);
    //    }
    //
    //    answer = max(answer, localMax);
    //    arr[minus_idx[i]] = tmp;
    //}
    //cout << answer;
    //기존에는 이 주석 코드처럼 마이너스 요소를 0으로 바꾸고 
    //다시 dp배열을 계산하고 다시 복구시킨 후 다음 마이너스 값을
    //0으로 바꾸는 패턴으로 하였지만 시간초과로 로직을 바꾸게 됨



    return 0;

}*/



/*
#include <iostream>
#include <algorithm>
#define MOD 1000000007
using namespace std;
//boj 13172

long long gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

long long custom_pow(long long n, long long m) {
    //빠른 거듭제곱
    long long ret = 1;
    while (m) {
        if (m & 1) ret = ret * n % MOD;
        m = m / 2;
        n = n * n % MOD;
    }
    return ret;
}


int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long dice_num;
    long long dice_face;
    long long dice_sum;
    long long answer = 0;
    cin >> dice_num;

    for (size_t i = 0; i < dice_num; ++i) {
        cin >> dice_face >> dice_sum;
        answer += (dice_sum * (custom_pow(dice_face, MOD - 2))) % MOD;
    }


    cout << answer % MOD;



    return 0;
}*/

/*
#include <iostream>
#include <queue>
#include <algorithm>
//boj 2229
using namespace std;


int students[1000] = {0, };
int dp[1000] = {0, };
int main() {

    int students_num;
    cin >> students_num;
    
    for (size_t i = 0; i < students_num; ++i) {
        cin >> students[i];
    }
    
    for (int i = 1; i < students_num; ++i) {
        int max_tmp = students[i];
        int min_tmp = students[i];
        for (int j = i; j >= 0; --j) {
            max_tmp = max(students[j], max_tmp);
            min_tmp = min(students[j], min_tmp);
            if (j > 0) {
                dp[i] = max(dp[i], dp[j - 1] + max_tmp - min_tmp);
            }
            else {
                dp[i] = max(dp[i], max_tmp - min_tmp);
            }
        }
    }


    cout << dp[students_num - 1];


    return 0;

}*/



/*
#include <iostream>
#include <algorithm>
#include <climits>
//boj 2343
using namespace std;

int lesson[100000] = { 0, };

int main() {

    int lesson_num;
    int blueray_num; 
    int sum = 0;
    int low = INT_MIN;
    int high = 0;
    cin >> lesson_num >> blueray_num;

    for (size_t i = 0; i < lesson_num; ++i) {
        cin >> lesson[i];
        high += lesson[i];
        low = max(low, lesson[i]);
        //이분 탐색시 필요한 최저는 강의 목록 중 가장 시간이 긴 것
        //최고는 레슨 시간들의 총합
    }
    
    while (low <= high) {

        int cnt = 0;
        int tmp = 0;
        int mid = (low + high) / 2; //임시 가정 블루레이 크기

        for (size_t i = 0; i < lesson_num; ++i) {
            if (tmp + lesson[i] > mid) {
                tmp = 0;
                ++cnt;
                //모든 레슨 하나씩 담으면서 
                //가정한 블루레이 크기보다 커지면
                //블루레이 갯수 한개 증가 
            }
            tmp += lesson[i];
        }
        //
        if (tmp != 0) ++cnt;

        //반복문 돌면서 현재 가정 블루레이 수와
        //목표 블루레이 수를 비교하며 
        //이분탐색을 활용해서 목표 블루레이 수에 맞춘다.
        if (cnt <= blueray_num) {
            high = mid - 1;

        }
        else {
            low = mid + 1;
        }

    }

    cout << low;

    return 0;

}

*/




/*
#include <iostream>
#include <algorithm>
#include <cmath>
#include <climits>

//boj 2470
using namespace std;

int num[100000] = { 0, };

int main() {

    int answer_l;
    int answer_r;
 

    int input;
    cin >> input;


    int cur_l = 0;
    int cur_r = input - 1;

    int min_tmp = INT_MAX;

    for (size_t i = 0; i < input; ++i) {
        cin >> num[i];

    }

    sort(num, num + input);


    while (cur_l < cur_r) {
        //처음에 cur_l <= cur_r했다가 틀리길래 생각해봤더니
        //이 문제의 투 포인터 접근법에서는 항상 cur_l이 
        //cur_r보다 윈쪽에 있는 것이 보장되어야 한다.
        int sum = num[cur_l] + num[cur_r];
        int diff = abs(num[cur_l] + num[cur_r]);

        if (sum == 0) {
            answer_l = cur_l;
            answer_r = cur_r;
            break;

        }

        if (min_tmp > diff)
        {
            answer_l = cur_l;
            answer_r = cur_r;
            min_tmp = diff;
        }

        if (sum < 0)    ++cur_l;
        else --cur_r;
    }


    cout << num[answer_l] << " " << num[answer_r];


    return 0;
}


*/





/*
#include <iostream>
#include <algorithm>
#include <climits>
//boj 9024
using namespace std;


int arr[1000000] = { 0, };
int main() {

    ios::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int testcase;
    cin >> testcase;
    

    int input_num;
    int goal_num;
    for (size_t i = 0; i < testcase; ++i) {
        
        cin >> input_num >> goal_num;
        for (size_t i = 0; i < input_num; ++i) {
            
            cin >> arr[i];
        }
        sort(arr, arr + input_num);
        
        int low = 0;
        int high = input_num - 1;
        int diff_num = INT_MAX;
        int answer = 0;

        while (low < high) {
            int left_num = arr[low];
            int right_num = arr[high];

            if (goal_num == left_num + right_num)
            {
                ++low;
                --high;

            }

            else if (goal_num < left_num + right_num) {
                --high;
            }

            else {
                ++low;
            }


            if (abs(goal_num - (left_num + right_num)) < diff_num)
            {
                diff_num = abs(goal_num - (left_num + right_num));
                answer = 1;
            }
            else if (abs(goal_num - (left_num + right_num)) == diff_num) {
                ++answer;
            }

        }

        cout << answer << endl;

    }

    return 0;
}*/




/*
#include <iostream>
#include <algorithm>
#include <climits>

//boj2467
using namespace std;


int solution[100000] = { 0, };
int main() {

    int input_cnt;

    cin >> input_cnt;

    for (size_t i = 0; i < input_cnt; ++i) {
        
        cin >> solution[i];
    
    
    }

    int low = 0;
    int high = input_cnt - 1;

    int answer_l = low;
    int answer_r = high;


    int mid = INT_MAX;
    while (low < high) {
        
        if (solution[high] + solution[low] == 0) {
            
            cout << solution[low] << solution[high];
            return 0;

        }
        
        if (abs(solution[high] + solution[low]) < mid) {
            
            mid = abs(solution[high] + solution[low]);
            answer_l = low;
            answer_r = high;
            

        }

        if (solution[high] + solution[low] < 0) {
            ++low;
        }
            
        else {
            --high;
        }
    
    
    }




    cout << solution[answer_l] << " " << solution[answer_r];





    return 0;

}*/


/*
#include <iostream>
#include <algorithm>
boj 2110
using namespace std;

int stall[200000] = { 0, };

int main() {

    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);

    int barn_size;
    int cow_num;
    cin >> barn_size >> cow_num;

    for (size_t i = 0; i < barn_size; ++i) {

        cin >> stall[i];

    }


    sort(stall, stall + barn_size);
    int answer = 0;
    int lo = 1;
    int hi = stall[barn_size - 1] - stall[0];

    while (lo <= hi) {

        int mid = (lo + hi) / 2;
        int cnt = 1; //기본적으로 소 한 마리 위치시키고 시작
        int starting_point = stall[0];  //처음엔 첫 번째 자리에 소를 자리잡고
        //나머지 소를 놓기 때문에 스타팅 포인트를 첫번째 요소로 지정

        for (size_t i = 1; i < barn_size; ++i) {
            if (mid <= stall[i] - starting_point) { //소를 위치시킬 때 현재 기준으로 잡은 거리 안에 위치가 가능한가
                ++cnt; //가능할 시 소를 놓고 현재 자리잡은 소의 수 증가
                starting_point = stall[i]; //현재 자리잡은 소를 스타팅포인트로 지정하고 다음 자리잡을 소와 거리 비교

            }


        }


        if (cnt >= cow_num) {
            // 소를 다 놓을 수 있을 시 거리 늘려보기  
            answer = mid;
            lo = mid + 1;

        }

        else
        {
            //소를 다 놓을 수 없다면 기준 거리 좁혀보기
            hi = mid - 1;
        }



    }

    cout << answer;


    return 0;

}

*/


/*
#include <iostream>
#include <algorithm>

//boj 1253
using namespace std;

int arr[2000] = { 0, };

int main() {

    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);
    
    int input_cnt;
    cin >> input_cnt;
    int answer = 0;

    for (size_t i = 0; i < input_cnt; ++i) {
        
        cin >> arr[i];
    
    }

    sort(arr, arr + input_cnt);

    for (size_t i = 0; i < input_cnt; ++i) {
    
    
    
        size_t lo = 0;
        size_t hi = input_cnt - 1;
        int mid = arr[i];
        while (lo < hi) {
            
            if (lo == i) {
                ++lo;
                continue;
            }

            if (hi == i) {
                --hi;
                continue;
            }

            if (arr[lo] + arr[hi] == mid) {
                
                ++answer;
                break;


            }


            else if (arr[lo] + arr[hi] < mid) {
                ++lo;

            }

            else
            {
                --hi;
            }
        
        
        
        }
    
    
    }


    cout << answer;




    return 0;
}

*/



/*
#include <iostream>
#include <algorithm>

//boj 1477
using namespace std;

int installed_rest[50] = { 0, };


int main() {

    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);

    int installed_rest_input;
    int add_rest;
    int highway_length;
    int answer = 9999;

    cin >> installed_rest_input>> add_rest >> highway_length;

    for (size_t i = 1; i <= installed_rest_input; ++i) {
        
        cin >> installed_rest[i];

    }

    installed_rest[0] = 0;
    installed_rest[installed_rest_input + 1] = highway_length;
    //이 부분 때문에 못풀다가 답지 보고 깨달았다.
    //고속도로의 시작점 부터 첫 휴게소 까지의 거리도 차이가 있기 때문에 그 사이에 휴게소를 추가할 경우의 수도 판단해야 하기 때문에
    //시작점도 추가해야하고 마찬가지로 고속도로의 끝점에서 마지막 휴게소 사이에서도 휴게소를 추가할 수 있기에 고속도로의 길이도 넣어야한다. 

    sort(installed_rest, installed_rest + installed_rest_input + 2);


    int lo = 1;
    int hi = highway_length - 1;

    while (lo <= hi) {

        int mid = (lo + hi) / 2;
        int added_rest = 0;
    
        for (size_t i = 1; i < installed_rest_input + 2; ++i) {

            int diff = installed_rest[i] - installed_rest[i - 1];
            int cnt = diff / mid;

            if (cnt > 0) {


                if (diff % mid == 0) added_rest += cnt - 1;
                else added_rest += cnt;

            }
        }

        if (added_rest > add_rest)   lo = mid + 1;
        else {
            
            hi = mid - 1;
            answer = min(answer, mid);


        }
    
    }

    cout << answer;

    return 0;
}
*/




