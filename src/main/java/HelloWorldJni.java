

public class HelloWorldJni {


    static {
        System.loadLibrary("native");
    }

    public static void main(String[] args) {
        new HelloWorldJni().sayHello();

        System.out.println(new HelloWorldJni().sayHelloTome("123", true));
    }

    private native void sayHello();

    private native long sumIntegers(int first, int second);

    private native String sayHelloTome(String name, boolean isFemale);
}
