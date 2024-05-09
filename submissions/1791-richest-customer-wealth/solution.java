import java.util.Arrays;
import java.util.stream.IntStream;

class Solution {
    public int maximumWealth(int[][] accounts) {
        return Arrays.stream(accounts)
                .map(Arrays::stream)
                .map(IntStream::sum)
                .max(Integer::compare)
                .orElse(0);
    }
}
