
public class WeatherStation {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		WeatherData weatherData = new WeatherData(); 
									//Use the weatherDat object in order to transfer data to display
		
		DisplayCurrentConditions currentDisplay = new DisplayCurrentConditions(weatherData);
		DisplayCurrentForecast forecastDisplay = new DisplayCurrentForecast(weatherData);
		//regist display
		
		weatherData.setMeasurements(80, 65, 30.4f);	//I have no weather data from real info.
		weatherData.notifyObservers();
		
		weatherData.setMeasurements(82, 70, 29.2f);
		weatherData.notifyObservers();
		
	}

}
