long long inv(long long a, long long md) {
    a %= md;
    if (a < 0) a += md;
    long long b = md, u = 0, v = 1;
    while (a) {
        long long q = b / a;
        b -= q * a;
        swap(a, b);
        u -= q * v;
        swap(u, v);
    }
    if (u < 0) u += md;
    return u;
}
