interface LibraryUser {
    void registerAccount();
    void requestBook();
}

class KidUser implements LibraryUser {

    int age;
    String bookType;

    public void registerAccount() {
        if(age < 12) {
            System.out.println("You have successfully registered under a Kids Account");
        }
        if(age > 12) {
            System.out.println("Sorry, Age must be less than 12 to register as a kid");
        }
    }

    public void requestBook() {
        if(bookType.equals("Kids")) {
            System.out.println("Book Issued successfully, please return the book within 10 days");
        }
        else {
            System.out.println("Oops, you are allowed to take only kids books");
        }
    }
}

class AdultUser implements LibraryUser {

    int age;
    String bookType;

    public void registerAccount() {
        if(age > 12) {
            System.out.println("You have successfully registered under an Adult Account");
        }
        if(age < 12) {
            System.out.println("Sorry, Age must be greater than 12 to register as an adult");
        }
    }

    public void requestBook() {
        if(bookType.equals("Fiction")) {
            System.out.println("Book Issued successfully, please return the book within 7 days");
        }
        else {
            System.out.println("Oops, you are allowed to take only adult Fiction books");
        }
    }
}

public class LibraryInterfaceDemo {

    public static void main(String[] args) {

        KidUser kid = new KidUser();

        kid.age = 10;
        kid.bookType = "Kids";
        kid.registerAccount();
        kid.requestBook();

        kid.age = 18;
        kid.bookType = "Fiction";
        kid.registerAccount();
        kid.requestBook();

        AdultUser adult = new AdultUser();

        adult.age = 5;
        adult.bookType = "Kids";
        adult.registerAccount();
        adult.requestBook();

        adult.age = 23;
        adult.bookType = "Fiction";
        adult.registerAccount();
        adult.requestBook();
    }
}