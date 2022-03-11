public class App {
    public static void main(String[] args) {
        String testWord = "kayak";
        String testWord1 = "uxcnjdsk";

        System.out.println(findPalindrome(testWord));
        System.out.println(findPalindrome(testWord1));

    }

    public static boolean findPalindrome(String word){

        //Handle case for either two middle letters or one letter
        if(word.length() == 0 || word.length() == 1)
            return true;

        //Reduce problem
        if(word.charAt(0) == word.charAt( word.length() - 1 ))
            return findPalindrome(word.substring(1,word.length() - 1));

        return false;
    }
}
