public class AlumniInformationEntry {
    private String name;
    private String jobTitle;
    private String companyName;
    private String emailAddress;

    // Default Constructor
    public AlumniInformationEntry() {
        this.name = "";
        this.jobTitle = "";
        this.companyName = "";
        this.emailAddress = "";
    }

    // Parameterized Constructor
    public AlumniInformationEntry(String name, String jobTitle, String companyName, String emailAddress) {
        this.name = name;
        this.jobTitle = jobTitle;
        this.companyName = companyName;
        this.emailAddress = emailAddress;
    }

    // Getters
    public String getName() { return name; }
    public String getJobTitle() { return jobTitle; }
    public String getCompanyName() { return companyName; }
    public String getEmailAddress() { return emailAddress; }

    // Setters
    public void setName(String name) { this.name = name; }
    public void setJobTitle(String jobTitle) { this.jobTitle = jobTitle; }
    public void setCompanyName(String companyName) { this.companyName = companyName; }
    public void setEmailAddress(String emailAddress) { this.emailAddress = emailAddress; }

    // Display method
    public void displayInfo() {
        System.out.println("Attribute/Properties        Description");
        System.out.println("----------------------------------------");
        System.out.println("Name                        " + name);
        System.out.println("Job Title                   " + jobTitle);
        System.out.println("Company Name                " + companyName);
        System.out.println("Email Address               " + emailAddress);
    }
}
