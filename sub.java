public class sub {

  public static void main(String[] args) {

    int[] arr = { 5, 3, -1, 8 };
    int[] pf = getprefixsum(arr);

    int n = arr.length;
    for (int s = 0; s < n; s++) {
      int sum = 0;
      for (int e = s; e < n; e++) {

        if (s == 0) {
          System.out.println(pf[e]);
        } else {
          System.out.println(pf[e] - pf[s - 1]);
        }
        // sum += arr[e];
        // System.out.println("sum is " + sum);
      }
      // System.out.println("\n");
    }

  }

  public static int[] getprefixsum(int[] arr) {

    int[] pf = new int[arr.length];
    pf[0] = arr[0];
    for (int i = 1; i < arr.length; i++) {
      pf[i] = arr[i] + pf[i - 1];
    }
    return pf;

  }

}
