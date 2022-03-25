//
//  furby.h
//  
//
//  Created by Raja  on 25/3/2022.
//

#ifndef furby_h
#define furby_h
#include "ArtificialPet.h"

class  Furby: public ArtificialPet{
    public:
        Furby();
        void play(int min);
        void dance(int min);
};

#endif /* furby_h */
