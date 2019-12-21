if (*p_a < *p_b && *p_a < *p_c) {
    *p_b = *p_a;
    *p_c = *p_a;
} else if (*p_b < *p_c) {
    *p_a = *p_b;
    *p_c = *p_b;
} else {
    *p_a = *p_c;
    *p_b = *p_c;    
}