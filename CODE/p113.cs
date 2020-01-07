public class shoot : MonoBehaviour
{
	// Use this for initialization
	void Start ()
	{
		
	}
	public int speed = 30;										//定义公有变量修改速度为30
	public Transform newobject;									//定义公有变量 新物体
	
	// Update is called once per frame
	void Update ()
	{
		float x = Input.GetAxis("horizontal") * Time.deltaTime * speed;				//如果检测到键盘AD键按下，将函数返回的值乘以时间和速度为位移 
		float z = Input.GetAxis("Vertical") * Time.deltaTime * speed;				//如果检测到键盘WS键按下，将函数返回的值乘以时间和速度为位移 
		transform.Translate(x, 0, z);
		
		if(Input.GetButtonDown("Firel"))							//如果检测到鼠标左键按下 
		{
			Transform n = Instantiate(newobject, transform.position, transform.rotation);	//定义Transform物体型变量n，引用newobject，后面两个参数时位置和旋转角度
			Vector3 fwd = transform.TransformDirection(Vector3.forward);			//炮弹发射方向随主摄像头朝向移动
			n.GetComponent<Rigidbody>().AddForce(fwd * 2800 * 5);				//调用n物体的刚体组件中的函数AddForce添加力2800*5N 
		}
		
		if(Input.GetKey(KeyCode.Q))
		{
			transform.Rotate(0, -25 * Time.deltaTime, 0, Space.Self);			//按下Q键向左旋转
		}
		if(Input.GetKey(KeyCode.E))
		{
			transform.Rotate(0, 25 * Time.deltaTime, 0, Space.Self);			//按下E键向右旋转
		}
		if(Input.GetKey(KeyCode.Z))
		{
			transform.Rotate(-25 * Time.deltaTime, 0, 0, Space.Self);			//按下Z键向上旋转
		}
		if(Input.GetKey(KeyCode.C))
		{
			transform.Rotate(25 * Time.deltaTime, 0, 0, Space.Self);			//按下C键向下旋转
		}
	}
}
