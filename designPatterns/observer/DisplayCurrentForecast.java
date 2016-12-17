
public class DisplayCurrentForecast implements Observer, DisplayElement{
	private float temperature;
	private float humidity;
	private float pressure;
	private Subject weatherData;
	
	public DisplayCurrentForecast(Subject s) {
		// TODO Auto-generated constructor stub
		this.weatherData = s;
		s.registerObserver(this);
	}

	@Override
	public void update(float temp, float humidity, float pressure) {
		// TODO Auto-generated method stub
		this.temperature = temp;
		this.humidity = humidity;
		this.pressure = pressure;
		display();
	}

	@Override
	public void display() {
		// TODO Auto-generated method stub
		System.out.println("DisplayCurrentForecast, current pressure :"+pressure+" more and more cold");
	}

}
