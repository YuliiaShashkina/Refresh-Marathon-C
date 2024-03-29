static int compare(int current, int x);

int mx_sqrt(int x) {
    int start = 1;
    int end = x <= 46340 ? x : 46340;

    if (!x || x == 1) {
        return x;
    }
    while (start <= end) {
        int mid = (start + end) / 2;

        if (compare(mid, x) == 0) {
            return mid;
        }
        if (compare(mid, x) < 0) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }
    return 0;
}

static int compare(int current, int x) {
    return current * current - x;
}

