//
//  ArtificialPet.cpp
//  
//
//  Created by Raja  on 25/3/2022.
//

#include "ArtificialPet.h"
ArtificialPet::ArtificialPet(){
    full;
}
bool ArtificialPet::isHungry(){
    
    return (full<0?full:0);
    }
}

void ArtificialPet::feed(){
    full=full+(10-full/2)+1;
    
    if(full>10){
        full = 10;
}
    

void ArtificialPet::play(int min){
    full=full-min;
}
