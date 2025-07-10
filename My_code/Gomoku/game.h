#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include<windows.h>
#include<stdio.h>
void menu();
void InitBoard(char board[16][16]);
void DisplayBoard(char board[16][16]);
void ChessByPlayer(char board[16][16]);
void ChessByComputer(char board[16][16]);
int evaluatePosition(char board[16][16], int x, int y, char player);
int IsWin(char board[16][16],char a);