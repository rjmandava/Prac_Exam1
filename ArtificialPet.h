//
//  ArtificialPet.h
//  
//
//  Created by Raja  on 25/3/2022.
//

#ifndef ArtificialPet_h
#define ArtificialPet_h
#include <stdio.h>

class ArtificialPet{
public:
    ArtificialPet();
    bool isHungry();
    void feed();
    virtual void play(int min); //can be implemented in diffrent pets
protected:
    int full;
};
#endif /* ArtificialPet_h */
