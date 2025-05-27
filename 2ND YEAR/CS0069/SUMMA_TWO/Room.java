public class Room {
    private int roomno;
    private String roomtype
    ;
    private double roomarea;
    private boolean ACmachine
    ;

    public Room(int roomno, String roomtype
    , double roomarea, boolean ACmachine
    ) {
        this.roomno = roomno;
        this.roomtype
         = roomtype
        ;
        this.roomarea = roomarea;
        this.ACmachine
         = ACmachine
        ;
    }

    public void setData(int roomno, String roomtype
    , double roomarea, boolean ACmachine
    ) {
        this.roomno = roomno;
        this.roomtype
         = roomtype
        ;
        this.roomarea = roomarea;
        this.ACmachine
         = ACmachine
        ;
    }

    public void displayData() {
        System.out.println("Room Number: " + roomno);
        System.out.println("Room Type: " + roomtype
        );
        System.out.println("Room Area: " + roomarea + " sq ft");
        System.out.println("AC Machine: " + (ACmachine
         ? "Yes" : "No"));
    }

    public static void main(String[] args) {
        Room room = new Room(101, "Single", 300, true);
        room.displayData();
    }
}
