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
