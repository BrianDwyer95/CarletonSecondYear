
class Recording{
    public:
        Recording(int recordingId, string title, string artist, string year, string producer);
        Recording(Recording& anRecording);
        int    recordingId(void);
        string getTitle(void);
        string getArtist(void);
        string getYear(void);
        string getproducer(void);
        void   printRecord(void);
    private:
        int recordingId;
        string  title;
        string  artist;
        string  year;
        string  producer;
};