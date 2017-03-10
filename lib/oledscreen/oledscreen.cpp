/*
* Logos for the spaces. I accept pull-requests (sometimes)
*/

#include <config.h>
#include <oledscreen.h>

// Possible to refactor this with a generic function?
void LAGlogo(){
    display.drawXbm(
        (128 - LAG_width)/2,
        (64 - LAG_height)/2,
        LAG_width,
        LAG_height,
        LAG_bits
    );
}

void NURDlogo(){
    display.drawXbm(
        (128 - NURDspace_width)/2,
        (64 - NURDspace_height)/2,
        NURDspace_width,
        NURDspace_height,
        NURDspace_bits
    );
}

void Hack42logo(){
    display.drawXbm(
        (128 - Hack42_width)/2,
        (64 - Hack42_height)/2,
        Hack42_width,
        Hack42_height,
        Hack42_bits
    );
}

void Pixellogo(){
    display.drawXbm(
        (128 - Pixelbar_width)/2,
        (64 - Pixelbar_height)/2,
        Pixelbar_width,
        Pixelbar_height,
        Pixelbar_bits
    );
}

void Sk1lllogo(){
    display.drawXbm(
        (128 - Sk1llz_width)/2,
        (64 - Sk1llz_height)/2,
        Sk1llz_width,
        Sk1llz_height,
        Sk1llz_bits
    );
}

void Revlogo(){
    display.drawXbm(
        (128 - Revspace_width)/2,
        (64 - Revspace_height)/2,
        Revspace_width,
        Revspace_height,
        Revspace_bits
    );
}

void TechInclogo(){
    display.drawXbm(
        (128 - TechInc_width)/2,
        (64 - TechInc_height)/2,
        TechInc_width,
        TechInc_height,
        TechInc_bits
    );
}

void Bitlogo(){
    display.drawXbm(
        (128 - Bitlair_width)/2,
        (64 - Bitlair_height)/2,
        Bitlair_width,
        Bitlair_height,
        Bitlair_bits
    );
}

void Fracklogo(){
    display.drawXbm(
        (128 - Frack_width)/2,
        (64 - Frack_height)/2,
        Frack_width,
        Frack_height,
        Frack_bits
    );
}

void Tkkrlogo(){
    display.drawXbm(
        (128 - TkkrLab_width)/2,
        (64 - TkkrLab_height)/2,
        TkkrLab_width,
        TkkrLab_height,
        TkkrLab_bits
    );
}

void Voidlogo(){
    display.drawXbm(
        (128 - Voidwarranties_width)/2,
        (64 - Voidwarranties_height)/2,
        Voidwarranties_width,
        Voidwarranties_height,
        Voidwarranties_bits
    );
}

void UrLablogo(){
    display.drawXbm(
        (128 - UrLab_width)/2,
        (64 - UrLab_height)/2,
        UrLab_width,
        UrLab_height,
        UrLab_bits
    );
}

void Brixellogo(){
    display.drawXbm(
        (128 - Brixel_width)/2,
        (64 - Brixel_height)/2,
        Brixel_width,
        Brixel_height,
        Brixel_bits
    );
}

void syn2logo(){
    display.drawXbm(
        (128 - Syn2cat_width)/2,
        (64 - Syn2cat_height)/2,
        Syn2cat_width,
        Syn2cat_height,
        Syn2cat_bits
    );
}

void Chaoslogo(){
    display.drawXbm(
        (128 - Chaos_width)/2,
        (64 - Chaos_height)/2,
        Chaos_width,
        Chaos_height,
        Chaos_bits
    );
}


// Would like a proper char->function mapping instead
// Need to keep track of sequence compared to mySpaces[]
typedef void (*functMap)();
functMap logoMap[] = {
    LAGlogo,
    NURDlogo,
    Hack42logo,
    Pixellogo,
    Sk1lllogo,
    Revlogo,
    TechInclogo,
    Bitlogo,
    Fracklogo,
    Tkkrlogo,
    Voidlogo,
    UrLablogo,
    Brixellogo,
    syn2logo,
    Chaoslogo
};


void spaceLogo(){
    display.clear();

    logoMap[encoderPos]();

    display.display();
}
