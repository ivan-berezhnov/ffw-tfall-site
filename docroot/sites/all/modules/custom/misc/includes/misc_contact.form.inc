<?php

function misc_contact_form($form, &$form_state) {

	$form['firstname'] = array(
		'#title' => t('Name'),
		'#type' => 'textfield',
		'#required' => true,
	);

	$form['email'] = array(
		'#title' => t('Email'),
		'#type' => 'textfield',
		'#required' => true,
	);

	$form['country'] = array(
		'#title' => t('Country of interest'),
		'#type' => 'select',
		'#required' => true,
		'#options' => array(
			t('Afghanistan'), t('Albania'), t('Algeria'), t('American Samoa'), t('Andorra'), t('Angola'), t('Anguilla'), t('Antarctica'), t('Antigua and Barbuda'), t('Argentina'), t('Armenia'), t('Aruba'), t('Australia'), t('Austria'), t('Azerbaijan'), t('Bahamas'), t('Bahrain'), t('Bangladesh'), t('Barbados'), t('Belarus'), t('Belgium'), t('Belize'), t('Benin'), t('Bermuda'), t('Bhutan'), t('Bolivia'), t('Bosnia and Herzegovina'), t('Botswana'), t('Brazil'), t('Brunei Darussalam'), t('Bulgaria'), t('Burkina Faso'), t('Burundi'), t('Cambodia'), t('Cameroon'), t('Canada'), t('Cape Verde'), t('Cayman Islands'), t('Central African Republic'), t('Chad'), t('Chile'), t('China'), t('Christmas Island'), t('Cocos (Keeling) Islands'), t('Colombia'), t('Comoros'), t('Democratic Republic of the Congo (Kinshasa)'), t('Congo, Republic of (Brazzaville)'), t('Cook Islands'), t('Costa Rica'), t('Ivory Coast'), t('Croatia'), t('Cuba'), t('Cyprus'), t('Czech Republic'), t('Denmark'), t('Djibouti'), t('Dominica'), t('Dominican Republic'), t('East Timor (Timor-Leste)'), t('Ecuador'), t('Egypt'), t('El Salvador'), t('Equatorial Guinea'), t('Eritrea'), t('Estonia'), t('Ethiopia'), t('Falkland Islands'), t('Faroe Islands'), t('Fiji'), t('Finland'), t('France'), t('French Guiana'), t('French Polynesia'), t('French Southern Territories'), t('Gabon'), t('Gambia'), t('Georgia'), t('Germany'), t('Ghana'), t('Gibraltar'), t('Great Britain'), t('Greece'), t('Greenland'), t('Grenada'), t('Guadeloupe'), t('Guam'), t('Guatemala'), t('Guinea'), t('Guinea-Bissau'), t('Guyana'), t('Haiti'), t('Holy See'), t('Honduras'), t('Hong Kong'), t('Hungary'), t('Iceland'), t('India'), t('Indonesia'), t('Iran (Islamic Republic of)'), t('Iraq'), t('Ireland'), t('Israel'), t('Italy'), t('Jamaica'), t('Japan'), t('Jordan'), t('Kazakhstan'), t('Kenya'), t('Kiribati'), t("Korea, Democratic People's Rep. (North Korea)"), t('Korea, Republic of (South Korea)'), t('Kuwait'), t('Kyrgyzstan'), t("Lao, People's Democratic Republic"), t('Latvia'), t('Lebanon'), t('Lesotho'), t('Liberia'), t('Libya'), t('Liechtenstein'), t('Lithuania'), t('Luxembourg'), t('Macau'), t('Macedonia, Rep. of'), t('Madagascar'), t('Malawi'), t('Malaysia'), t('Maldives'), t('Mali'), t('Malta'), t('Marshall Islands'), t('Martinique'), t('Mauritania'), t('Mauritius'), t('Mayotte'), t('Mexico'), t('Micronesia, Federal States of'), t('Moldova, Republic of'), t('Monaco'), t('Mongolia'), t('Montenegro'), t('Montserrat'), t('Morocco'), t('Mozambique'), t('Myanmar, Burma'), t('Namibia'), t('Nauru'), t('Nepal'), t('Netherlands'), t('Netherlands Antilles'), t('New Caledonia'), t('New Zealand'), t('Nicaragua'), t('Niger'), t('Nigeria'), t('Niue'), t('Northern Mariana Islands'), t('Norway'), t('Oman'), t('Pakistan'), t('Palau'), t('Palestinian territories'), t('Panama'), t('Papua New Guinea'), t('Paraguay'), t('Peru'), t('Philippines'), t('Pitcairn Island'), t('Poland'), t('Portugal'), t('Puerto Rico'), t('Qatar'), t('Reunion Island'), t('Romania'), t('Russian Federation'), t('Rwanda'), t('Saint Kitts and Nevis'), t('Saint Lucia'), t('Saint Vincent and the Grenadines'), t('Samoa'), t('San Marino'), t('Sao Tome and Principe'), t('Saudi Arabia'), t('Senegal'), t('Serbia'), t('Seychelles'), t('Sierra Leone'), t('Singapore'), t('Slovakia (Slovak Republic)'), t('Slovenia'), t('Solomon Islands'), t('Somalia'), t('South Africa'), t('South Sudan'), t('Spain'), t('Sri Lanka'), t('Sudan'), t('Suriname'), t('Swaziland'), t('Sweden'), t('Switzerland'), t('Syria, Syrian Arab Republic'), t('Taiwan (Republic of China)'), t('Tajikistan'), t('Tanzania; officially the United Republic of Tanzania'), t('Thailand'), t('Tibet'), t('Timor-Leste (East Timor)'), t('Togo'), t('Tokelau'), t('Tonga'), t('Trinidad and Tobago'), t('Tunisia'), t('Turkey'), t('Turkmenistan'), t('Turks and Caicos Islands'), t('Tuvalu'), t('Uganda'), t('Ukraine'), t('United Arab Emirates'), t('United Kingdom'), t('United States'), t('Uruguay'), t('Uzbekistan'), t('Vanuatu'), t('Vatican City State (Holy See)'), t('Venezuela'), t('Vietnam'), t('Virgin Islands (British)'), t('Virgin Islands (U.S.)'), t('Wallis and Futuna Islands'), t('Western Sahara'), t('Yemen'), t('Zambia'), t('Zimbabwe')
	);

	$form['summary'] = array(
		'#title' => t('Summary of your background and what motivates you to pursue this opportunity'),
		'#required' => true,
		'#type' => 'textarea',
	);

	$form['statement'] = array(
		'#title' => t('Brief statement regarding your vision of how Teach For All’s model could address educational inequity in your country'),
		'#required' => true,
		'#type' => 'textarea',
	);

	$form['submit'] = array(
		'#type' => 'submit',
		'#value' => t('Submit'),
	);

	return $form;
}

function misc_contact_form_validate($form, &$form_state) {

	$form_state['values']['country'] = $form['country']['#options'][$form_state['values']['country']]; //key to value
}

function misc_contact_form_submit($form, &$form_state) {

	drupal_mail('misc', 'contact_form', 'info@teachforall.org', language_default(), $form_state['values'], $form_state['values']['email'], TRUE);
	$form_state['redirect'] = 'contact-thank-you';
}
