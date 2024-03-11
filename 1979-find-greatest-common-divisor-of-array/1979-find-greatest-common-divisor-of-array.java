class Solution {
    public int findGCD(int[] v) {
        Arrays.sort(v);
        int n = v.length;
        return gcd(v[0], v[n-1]);
    }
     public static int gcd(int a, int b) {
        if(b == 0) 
          return a;
        return gcd(b, a%b);
      }
}