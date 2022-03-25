//
//  furby.cpp
//  
//
//  Created by Raja  on 25/3/2022.
//

#include<iostream
#include "Furby.h"
#include "ArtificialPet.h"

Furby::Furby(){
    full = 0;
}

void Furby::play(int min){
    full=full-(2*min);
}
void Furby::dance(int min){
        full=full-(3*min);
}
