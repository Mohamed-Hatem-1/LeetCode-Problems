class Solution {
    public int numberOfEmployeesWhoMetTarget(int[] v, int target) {
        int n = v.length;
        Arrays.sort(v);
        for (int i = n - 1; i >= 0; --i) {
            if (v[i] < target) return n - i - 1;
        }
        return n;
    }
}