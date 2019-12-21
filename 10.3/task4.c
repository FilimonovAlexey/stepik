void char_register(char * ch, int fl){
    if (!fl) {
        if (*ch > 64 && *ch < 91) *ch += 32;
    } else {
        if (*ch > 96 && *ch < 123) *ch -= 32;
    }
}