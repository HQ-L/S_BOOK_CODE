public class shoot : MonoBehaviour
{
	// Use this for initialization
	void Start ()
	{
		
	}
	public int speed = 30;																	//���幫�б����޸��ٶ�Ϊ30
	public Transform newobject;																//���幫�б��� ������
	
	// Update is called once per frame
	void Update ()
	{
		float x = Input.GetAxis("horizontal")*Time.deltaTime*speed;							//�����⵽����AD�����£����������ص�ֵ����ʱ����ٶ�Ϊλ�� 
		float z = Input.GetAxis("Vertical")*Time.deltaTime*speed;							//�����⵽����WS�����£����������ص�ֵ����ʱ����ٶ�Ϊλ�� 
		transform.Translate(x, 0, z);
		
		if(Input.GetButtonDown("Firel"))													//�����⵽���������� 
		{
			Transform n = Instantiate(newobject, transform.position, transform.rotation);	//����Transform�����ͱ���n������newobject��������������ʱλ�ú���ת�Ƕ�
			Vector3 fwd = transform.TransformDirection(Vector3.forward);					//�ڵ����䷽����������ͷ�����ƶ�
			n.GetComponent<Rigidbody>().AddForce(fwd * 2800*5);								//����n����ĸ�������еĺ���AddForce�����2800*5N 
		}
		
		if(Input.GetKey(KeyCode.Q))
		{
			transform.Rotate(0, -25*Time.deltaTime, 0, Space.Self);							//����Q��������ת
		}
		if(Input.GetKey(KeyCode.E))
		{
			transform.Rotate(0, 25*Time.deltaTime, 0, Space.Self);							//����E��������ת
		}
		if(Input.GetKey(KeyCode.Z))
		{
			transform.Rotate(-25*Time.deltaTime, 0, 0, Space.Self);							//����Z��������ת
		}
		if(Input.GetKey(KeyCode.C))
		{
			transform.Rotate(25*Time.deltaTime, 0, 0, Space.Self);							//����C��������ת
		}
	}
}
