/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: dronny
 *
 * Created on June 12, 2019, 2:44 AM
 */

#include<iostream>
#include <cstdlib>
#include<vector>
#include <Matrix.h>





using namespace std;


bool knightCanMove(const Matrix &grid ,int r1,int col1,int r2, int col2);


void swapFunc(int &a, int &b){
    cout<<"Before swapping , a is"<<a<<"whilst b is"<<b;
    int temp = a;
    a =b;
    b=temp;
    cout<<"after the swap ,b is:"<< b <<"and a is: "<<a;
}

void printDigits(){
    
    int n;
    cout<<"Enter a number";
    cin>>n;
    for(int i =1; i<=n;i++){
        for(int j=1; j<=i;j++){
        cout<<i;
        }
        cout<<endl;
    }
}


int main(int argc, char** argv) {

    const Matrix board ={{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0}};
   
    cout<< knightCanMove(board ,0,0,1, 2);
    
    
    return 0;
}

bool knightCanMove(const Matrix &grid ,int r1,int col1,int r2, int col2){
    bool possibleMove =false;
    //valid knight positions
    //moving row-wise 
    for(int  row_a =r1; row_a<= grid.getRows();row_a++){
        
        for(int col_a = col1;col_a<=grid.getColumns();col_a++){

            const int knight_pos_row =grid[row_a+1][col_a+2];
             
             if(knight_pos_row == grid[r2][col2]){
                 possibleMove =true;
             }
   
        }
    }
    return possibleMove;
  
}

