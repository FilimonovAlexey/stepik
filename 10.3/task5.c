void char_cesar(char * ch, int shift){
    if (*ch + shift > 122) *ch = 97 + shift - (123 - *ch);
    else *ch += shift;
}