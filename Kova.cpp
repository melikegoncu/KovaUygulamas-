#include "Kova.hpp"
#include"Top.hpp"
#include<iostream>
#include <Windows.h>
using namespace std;

Kova :: Kova()
{
    top1 = 0;
} 
void Kova :: topEkle()
{
	if (top1 == 0)
		{
			top1 = new Top();
            return;  
		}
}