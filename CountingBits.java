class Solution {
    public int[] countBits(int n) {
        int[] arr = new int[n+1];
        arr[0] = 0;
        if(n > 0)
            arr[1] = 1;
        int i = 2;
        while(i <= n) {
            //prev = 2 or prev = 3
            int prev = (int)(Math.log(i) / Math.log(2));
            //prev = 4 or prev = 8
            prev = (int)Math.pow(2,prev);
            if(prev == i)
                arr[i] = 1;
            else{
                //prev = 1 or prev = 7
                prev = i - prev;
                arr[i] = 1 + arr[prev];
            }
            i++;
        }
        return arr;
    }
}
