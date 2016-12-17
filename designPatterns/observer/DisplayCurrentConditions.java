
public class DisplayCurrentConditions implements Observer, DisplayElement {
	private float temperature;
	private float humidity;
	private Subject weatherData;
	
	public DisplayCurrentConditions(Subject s) {
		// TODO Auto-generated constructor stub
		this.weatherData = s;
		s.registerObserver(this);		// When create object, registe object.
	}
	
	@Override
	public void display() {
		// TODO Auto-generated method stub
		System.out.println("CurrentConditionsDisplay, temperature : "+temperature+"F degrees and "+humidity+"%");
	}
	@Override
	public void update(float temp, float humidity, float pressure) {
		// TODO Auto-generated method stub
		this.temperature = temp;
		this.humidity = humidity;
		display();
	}
	
}
