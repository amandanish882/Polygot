import java.util.ArrayList;


/**
 * Created by desktop on 1/22/17.
 */
public class RequestPayload {
    private final String userid;
    private final ArrayList<String> eventtype;
    private final ArrayList<String> userids;
    private final String ticker;

    public RequestPayload(Order order){
        ticker= order.ticker;
        userid = "TK";
        userids = new ArrayList<>();
        userids.add(userid);
        eventtype = new ArrayList<>();
        eventtype.add("Order");
    }

}
