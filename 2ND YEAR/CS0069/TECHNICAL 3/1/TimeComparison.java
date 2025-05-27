public class TimeComparison implements Comparison {

    @Override
    public boolean isGreater(Time t1, Time t2) {
        return t1.getTotalSeconds() > t2.getTotalSeconds();
    }

    @Override
    public boolean isLess(Time t1, Time t2) {
        return t1.getTotalSeconds() < t2.getTotalSeconds();
    }

    @Override
    public boolean isEqual(Time t1, Time t2) {
        return t1.getTotalSeconds() == t2.getTotalSeconds();
    }
}
