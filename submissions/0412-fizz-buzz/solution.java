class Solution {
    public List<String> fizzBuzz(int n) {
        return IntStream.range(1, n + 1)
                .mapToObj(this::helper)
                .toList();
    }

    private String helper(int n) {
        if (n % 3 == 0 && n % 5 == 0) {
            return "FizzBuzz";
        }
        if (n % 3 == 0) {
            return "Fizz";
        }
        if (n % 5 == 0) {
            return "Buzz";
        }
        return Integer.toString(n);
    }
}
