package packagetwo;

import packageone.*;

class Fud extends AcessModifier.Dumy {
    public void callFun(AcessModifier.Dumy obj) {
        fun(obj); // Accessing protected method from superclass instance
    }
}

public class AcessUse {
    public static void main(String[] args) {
        AcessModifier.Dumy obj = new AcessModifier.Dumy();
        Fud o1 = new Fud();
        o1.callFun(obj); // Now this will work since it's accessing via subclass method
    }
}
