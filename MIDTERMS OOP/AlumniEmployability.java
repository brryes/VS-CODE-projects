public class AlumniEmployability {
    // Attributes
    private String name;
    private String jobTitle;
    private String companyName;
    private String emailAddress;

    public AlumniEmployability() {
        this.name = "";
        this.jobTitle = "";
        this.companyName = "";
        this.emailAddress = "";
    }

    public AlumniEmployability(String name, String jobTitle, String companyName, String emailAddress) {
        this.name = name;
        this.jobTitle = jobTitle;
        this.companyName = companyName;
        this.emailAddress = emailAddress;
    }

    public String getName() {
        return name;
    }

    public String getJobTitle() {
        return jobTitle;
    }

    public String getCompanyName() {
        return companyName;
    }

    public String getEmailAddress() {
        return emailAddress;
    }

    public void setName(String name) {
        this.name = name;
    }

    public void setJobTitle(String jobTitle) {
        this.jobTitle = jobTitle;
    }

    public void setCompanyName(String companyName) {
        this.companyName = companyName;
    }

    public void setEmailAddress(String emailAddress) {
        this.emailAddress = emailAddress;
    }

    public void displayInfo() {
        System.out.println("Attribute/Properties        Description");
        System.out.println("----------------------------------------");
        System.out.println("Name                        " + name);
        System.out.println("Job Title                   " + jobTitle);
        System.out.println("Company Name                " + companyName);
        System.out.println("Email Address               " + emailAddress);
    }
    
    public static void main(String[] args) {
        AlumniEmployability AlumniEmployabilityumni = new AlumniEmployability("Sofia Beatrice Alexa R. Reyes", "Senior Manager: Data Scientist", "Insular Life", "sofiabhea@gmail.com");
        AlumniEmployabilityumni.displayInfo();
        
        System.out.println("\nUpdated Job Title:");
        AlumniEmployabilityumni.setJobTitle("Vice President: Data Scientist Dept.");
        AlumniEmployabilityumni.displayInfo();
    }
}
