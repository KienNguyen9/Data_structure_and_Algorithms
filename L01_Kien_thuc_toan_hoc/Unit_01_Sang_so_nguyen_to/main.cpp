/**
 * @file main.cpp
 * @author Kien Nguyen
 * @brief  Thuật toán sàng số nguyên tố 
 * Dùng để liệt kê, đếm các số nguyên tố nhỏ hơn hoặc bằng N
 * 
 * Nguyên lý của sàng số nguyên tố:
 * Dùng 1 mảng để đánh dấu 
 * @version 0.1
 * @date 2023-12-11
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
#include <math.h>
using namespace std;

//Sàng số nguyên tố - chỉ dùng cho mảng có kích thức nhỏ hơn hoặc bằng 10^7 nếu lớn hơn sẽ bị tràng bộ nhớ STACK
const int MAX_N = 10000001;
bool nt[MAX_N]; // i : 0 -> 10^7


void sang(){
// Set tất cả các phần tử của nt[] là true
    for(int i = 0; i < MAX_N; i++ ){
        nt[i] = true;
    }
    // Hoặc không dùng for() có thể dùng hàm memset()
    // memset(nt, true, sizeof(nt)); 

    // Loại thủ công
    nt[0] = nt[1] = false;

    // Duyệt từ 2 đến sqrt(MAX_N): 
    for(int i = 2; i <= sqrt(MAX_N); i++){
        if(nt[i]){
            for(int j = i*i; j<= MAX_N; j+= i){ // Cần chú ý: tại sao j = i*i và j += i ???
            // Nếu không biết câu trả lời thì đọc ở README
                nt[j] = false;
            }
        }
    }

    
}

int main()
{
    sang();
    for(int i = 0; i<= 1000; i++)
    {
        if(nt[i]) cout << i << ' ';
    } 
    return 0;
}