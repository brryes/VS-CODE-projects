class RoomSubject {
    private String subjCode;
    private String subjTitle;
    private String subjUnit;
    private String subjProf;
    private int room;

    public void setData(int room, String subjCode, String subjTitle, String subjUnit, String subjProf) {
        this.room = room;
        this.subjCode = subjCode;
        this.subjTitle = subjTitle;
        this.subjUnit = subjUnit;
        this.subjProf = subjProf;;
    }

    public void displayData() {

        System.out.println("Subject Title: " + subjTitle);
        System.out.println("Subject Code: " + subjCode);
        System.out.println("Subject Unit: " + subjUnit);
        System.out.println("Subject Professor: " + subjProf);
        System.out.println("Room: " + room);
    }

    public static void main(String[] args) {
        RoomSubject subject = new RoomSubject();

        subject.setData(505, "CS0069L", "Object Oriented Programming", "3 Units", "Rosalina D. Lacuesta");

        subject.displayData();
        //REYES, SOFIA BEATRICE AN23
    }
}
