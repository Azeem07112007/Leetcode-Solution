class Solution {
    public int smallestNumber(int n, int t) {
        while (num(n) % t != 0) {
            n++;
        }
        return n;
    }

    private int num(int a) {
        int val = 1, r;
        while (a > 0) {
            r = a % 10;
            val = val * r;
            a = a / 10;
        }
        return val;
    }
}