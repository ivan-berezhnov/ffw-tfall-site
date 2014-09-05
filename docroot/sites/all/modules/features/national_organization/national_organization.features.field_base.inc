<?php
/**
 * @file
 * national_organization.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function national_organization_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_about'
  $field_bases['field_about'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_about',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_active_flag'
  $field_bases['field_active_flag'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_active_flag',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => 'No',
        1 => 'Yes',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_integer',
  );

  // Exported field_base: 'field_alumni'
  $field_bases['field_alumni'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_alumni',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'number_integer',
  );

  // Exported field_base: 'field_avg_total_years_of_edu'
  $field_bases['field_avg_total_years_of_edu'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_avg_total_years_of_edu',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(
      'decimal_separator' => '.',
    ),
    'translatable' => 0,
    'type' => 'number_float',
  );

  // Exported field_base: 'field_blurb'
  $field_bases['field_blurb'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_blurb',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_careers_document'
  $field_bases['field_careers_document'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_careers_document',
    'foreign keys' => array(
      'fid' => array(
        'columns' => array(
          'fid' => 'fid',
        ),
        'table' => 'file_managed',
      ),
    ),
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'file',
    'settings' => array(
      'display_default' => 0,
      'display_field' => 0,
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'file',
  );

  // Exported field_base: 'field_careers_page'
  $field_bases['field_careers_page'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_careers_page',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'link',
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'rel' => '',
        'target' => 'default',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
    ),
    'translatable' => 0,
    'type' => 'link_field',
  );

  // Exported field_base: 'field_ceo_profile'
  $field_bases['field_ceo_profile'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_ceo_profile',
    'foreign keys' => array(
      'node' => array(
        'columns' => array(
          'target_id' => 'nid',
        ),
        'table' => 'node',
      ),
    ),
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'views',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'view' => array(
          'args' => array(),
          'display_name' => 'entityreference_1',
          'view_name' => 'person_entity_reference',
        ),
      ),
      'target_type' => 'node',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  // Exported field_base: 'field_city_1'
  $field_bases['field_city_1'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_city_1',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_cohorts_placed'
  $field_bases['field_cohorts_placed'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_cohorts_placed',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'number_integer',
  );

  // Exported field_base: 'field_contact_info'
  $field_bases['field_contact_info'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_contact_info',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_country'
  $field_bases['field_country'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_country',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'Afghanistan' => 'Afghanistan',
        'Albania' => 'Albania',
        'Algeria' => 'Algeria',
        'American Samoa' => 'American Samoa',
        'Andorra' => 'Andorra',
        'Angola' => 'Angola',
        'Anguilla' => 'Anguilla',
        'Antarctica' => 'Antarctica',
        'Antigua and Barbuda' => 'Antigua and Barbuda',
        'Argentina' => 'Argentina',
        'Armenia' => 'Armenia',
        'Aruba' => 'Aruba',
        'Australia' => 'Australia',
        'Austria' => 'Austria',
        'Azerbaijan' => 'Azerbaijan',
        'Bahamas' => 'Bahamas',
        'Bahrain' => 'Bahrain',
        'Bangladesh' => 'Bangladesh',
        'Barbados' => 'Barbados',
        'Belarus' => 'Belarus',
        'Belgium' => 'Belgium',
        'Belize' => 'Belize',
        'Benin' => 'Benin',
        'Bermuda' => 'Bermuda',
        'Bhutan' => 'Bhutan',
        'Bolivia' => 'Bolivia',
        'Bosnia and Herzegovina' => 'Bosnia and Herzegovina',
        'Botswana' => 'Botswana',
        'Brazil' => 'Brazil',
        'Brunei Darussalam' => 'Brunei Darussalam',
        'Bulgaria' => 'Bulgaria',
        'Burkina Faso' => 'Burkina Faso',
        'Burundi' => 'Burundi',
        'Cambodia' => 'Cambodia',
        'Cameroon' => 'Cameroon',
        'Canada' => 'Canada',
        'Cape Verde' => 'Cape Verde',
        'Cayman Islands' => 'Cayman Islands',
        'Central African Republic' => 'Central African Republic',
        'Chad' => 'Chad',
        'Chile' => 'Chile',
        'China' => 'China',
        'Christmas Island' => 'Christmas Island',
        'Cocos (Keeling) Islands' => 'Cocos (Keeling) Islands',
        'Colombia' => 'Colombia',
        'Comoros' => 'Comoros',
        'Democratic Republic of the Congo (Kinshasa)' => 'Democratic Republic of the Congo (Kinshasa)',
        'Congo, Republic of (Brazzaville)' => 'Congo, Republic of (Brazzaville)',
        'Cook Islands' => 'Cook Islands',
        'Costa Rica' => 'Costa Rica',
        'Ivory Coast' => 'Ivory Coast',
        'Croatia' => 'Croatia',
        'Cuba' => 'Cuba',
        'Cyprus' => 'Cyprus',
        'Czech Republic' => 'Czech Republic',
        'Denmark' => 'Denmark',
        'Djibouti' => 'Djibouti',
        'Dominica' => 'Dominica',
        'Dominican Republic' => 'Dominican Republic',
        'East Timor (Timor-Leste)' => 'East Timor (Timor-Leste)',
        'Ecuador' => 'Ecuador',
        'Egypt' => 'Egypt',
        'El Salvador' => 'El Salvador',
        'Equatorial Guinea' => 'Equatorial Guinea',
        'Eritrea' => 'Eritrea',
        'Estonia' => 'Estonia',
        'Ethiopia' => 'Ethiopia',
        'Falkland Islands' => 'Falkland Islands',
        'Faroe Islands' => 'Faroe Islands',
        'Fiji' => 'Fiji',
        'Finland' => 'Finland',
        'France' => 'France',
        'French Guiana' => 'French Guiana',
        'French Polynesia' => 'French Polynesia',
        'French Southern Territories' => 'French Southern Territories',
        'Gabon' => 'Gabon',
        'Gambia' => 'Gambia',
        'Georgia' => 'Georgia',
        'Germany' => 'Germany',
        'Ghana' => 'Ghana',
        'Gibraltar' => 'Gibraltar',
        'Great Britain' => 'Great Britain',
        'Greece' => 'Greece',
        'Greenland' => 'Greenland',
        'Grenada' => 'Grenada',
        'Guadeloupe' => 'Guadeloupe',
        'Guam' => 'Guam',
        'Guatemala' => 'Guatemala',
        'Guinea' => 'Guinea',
        'Guinea-Bissau' => 'Guinea-Bissau',
        'Guyana' => 'Guyana',
        'Haiti' => 'Haiti',
        'Holy See' => 'Holy See',
        'Honduras' => 'Honduras',
        'Hong Kong' => 'Hong Kong',
        'Hungary' => 'Hungary',
        'Iceland' => 'Iceland',
        'India' => 'India',
        'Indonesia' => 'Indonesia',
        'Iran (Islamic Republic of)' => 'Iran (Islamic Republic of)',
        'Iraq' => 'Iraq',
        'Ireland' => 'Ireland',
        'Israel' => 'Israel',
        'Italy' => 'Italy',
        'Jamaica' => 'Jamaica',
        'Japan' => 'Japan',
        'Jordan' => 'Jordan',
        'Kazakhstan' => 'Kazakhstan',
        'Kenya' => 'Kenya',
        'Kiribati' => 'Kiribati',
        'Korea, Democratic People\'s Rep. (North Korea)' => 'Korea, Democratic People\'s Rep. (North Korea)',
        'Korea, Republic of (South Korea)' => 'Korea, Republic of (South Korea)',
        'Kuwait' => 'Kuwait',
        'Kyrgyzstan' => 'Kyrgyzstan',
        'Lao, People\'s Democratic Republic' => 'Lao, People\'s Democratic Republic',
        'Latvia' => 'Latvia',
        'Lebanon' => 'Lebanon',
        'Lesotho' => 'Lesotho',
        'Liberia' => 'Liberia',
        'Libya' => 'Libya',
        'Liechtenstein' => 'Liechtenstein',
        'Lithuania' => 'Lithuania',
        'Luxembourg' => 'Luxembourg',
        'Macau' => 'Macau',
        'Macedonia, Rep. of' => 'Macedonia, Rep. of',
        'Madagascar' => 'Madagascar',
        'Malawi' => 'Malawi',
        'Malaysia' => 'Malaysia',
        'Maldives' => 'Maldives',
        'Mali' => 'Mali',
        'Malta' => 'Malta',
        'Marshall Islands' => 'Marshall Islands',
        'Martinique' => 'Martinique',
        'Mauritania' => 'Mauritania',
        'Mauritius' => 'Mauritius',
        'Mayotte' => 'Mayotte',
        'Mexico' => 'Mexico',
        'Micronesia, Federal States of' => 'Micronesia, Federal States of',
        'Moldova, Republic of' => 'Moldova, Republic of',
        'Monaco' => 'Monaco',
        'Mongolia' => 'Mongolia',
        'Montenegro' => 'Montenegro',
        'Montserrat' => 'Montserrat',
        'Morocco' => 'Morocco',
        'Mozambique' => 'Mozambique',
        'Myanmar, Burma' => 'Myanmar, Burma',
        'Namibia' => 'Namibia',
        'Nauru' => 'Nauru',
        'Nepal' => 'Nepal',
        'Netherlands' => 'Netherlands',
        'Netherlands Antilles' => 'Netherlands Antilles',
        'New Caledonia' => 'New Caledonia',
        'New Zealand' => 'New Zealand',
        'Nicaragua' => 'Nicaragua',
        'Niger' => 'Niger',
        'Nigeria' => 'Nigeria',
        'Niue' => 'Niue',
        'Northern Mariana Islands' => 'Northern Mariana Islands',
        'Norway' => 'Norway',
        'Oman' => 'Oman',
        'Pakistan' => 'Pakistan',
        'Palau' => 'Palau',
        'Palestinian territories' => 'Palestinian territories',
        'Panama' => 'Panama',
        'Papua New Guinea' => 'Papua New Guinea',
        'Paraguay' => 'Paraguay',
        'Peru' => 'Peru',
        'Philippines' => 'Philippines',
        'Pitcairn Island' => 'Pitcairn Island',
        'Poland' => 'Poland',
        'Portugal' => 'Portugal',
        'Puerto Rico' => 'Puerto Rico',
        'Qatar' => 'Qatar',
        'Reunion Island' => 'Reunion Island',
        'Romania' => 'Romania',
        'Russian Federation' => 'Russian Federation',
        'Rwanda' => 'Rwanda',
        'Saint Kitts and Nevis' => 'Saint Kitts and Nevis',
        'Saint Lucia' => 'Saint Lucia',
        'Saint Vincent and the Grenadines' => 'Saint Vincent and the Grenadines',
        'Samoa' => 'Samoa',
        'San Marino' => 'San Marino',
        'Sao Tome and Principe' => 'Sao Tome and Principe',
        'Saudi Arabia' => 'Saudi Arabia',
        'Senegal' => 'Senegal',
        'Serbia' => 'Serbia',
        'Seychelles' => 'Seychelles',
        'Sierra Leone' => 'Sierra Leone',
        'Singapore' => 'Singapore',
        'Slovakia (Slovak Republic)' => 'Slovakia (Slovak Republic)',
        'Slovenia' => 'Slovenia',
        'Solomon Islands' => 'Solomon Islands',
        'Somalia' => 'Somalia',
        'South Africa' => 'South Africa',
        'South Sudan' => 'South Sudan',
        'Spain' => 'Spain',
        'Sri Lanka' => 'Sri Lanka',
        'Sudan' => 'Sudan',
        'Suriname' => 'Suriname',
        'Swaziland' => 'Swaziland',
        'Sweden' => 'Sweden',
        'Switzerland' => 'Switzerland',
        'Syria, Syrian Arab Republic' => 'Syria, Syrian Arab Republic',
        'Taiwan (Republic of China)' => 'Taiwan (Republic of China)',
        'Tajikistan' => 'Tajikistan',
        'Tanzania; officially the United Republic of Tanzania' => 'Tanzania; officially the United Republic of Tanzania',
        'Thailand' => 'Thailand',
        'Tibet' => 'Tibet',
        'Timor-Leste (East Timor)' => 'Timor-Leste (East Timor)',
        'Togo' => 'Togo',
        'Tokelau' => 'Tokelau',
        'Tonga' => 'Tonga',
        'Trinidad and Tobago' => 'Trinidad and Tobago',
        'Tunisia' => 'Tunisia',
        'Turkey' => 'Turkey',
        'Turkmenistan' => 'Turkmenistan',
        'Turks and Caicos Islands' => 'Turks and Caicos Islands',
        'Tuvalu' => 'Tuvalu',
        'Uganda' => 'Uganda',
        'Ukraine' => 'Ukraine',
        'United Arab Emirates' => 'United Arab Emirates',
        'United Kingdom' => 'United Kingdom',
        'United States' => 'United States',
        'Uruguay' => 'Uruguay',
        'Uzbekistan' => 'Uzbekistan',
        'Vanuatu' => 'Vanuatu',
        'Vatican City State (Holy See)' => 'Vatican City State (Holy See)',
        'Venezuela' => 'Venezuela',
        'Vietnam' => 'Vietnam',
        'Virgin Islands (British)' => 'Virgin Islands (British)',
        'Virgin Islands (U.S.)' => 'Virgin Islands (U.S.)',
        'Wallis and Futuna Islands' => 'Wallis and Futuna Islands',
        'Western Sahara' => 'Western Sahara',
        'Yemen' => 'Yemen',
        'Zambia' => 'Zambia',
        'Zimbabwe' => 'Zimbabwe',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_key_facebook'
  $field_bases['field_key_facebook'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_key_facebook',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_links'
  $field_bases['field_links'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_links',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'link',
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'rel' => '',
        'target' => 'default',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
    ),
    'translatable' => 0,
    'type' => 'link_field',
  );

  // Exported field_base: 'field_living_below_poverty_line'
  $field_bases['field_living_below_poverty_line'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_living_below_poverty_line',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'number_integer',
  );

  // Exported field_base: 'field_location'
  $field_bases['field_location'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_location',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'google_map_field',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'google_map_field',
  );

  // Exported field_base: 'field_national_organization_twit'
  $field_bases['field_national_organization_twit'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_national_organization_twit',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_no_image'
  $field_bases['field_no_image'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_no_image',
    'foreign keys' => array(
      'fid' => array(
        'columns' => array(
          'fid' => 'fid',
        ),
        'table' => 'file_managed',
      ),
    ),
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'image',
    'settings' => array(
      'default_image' => 0,
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'image',
  );

  // Exported field_base: 'field_no_image_map'
  $field_bases['field_no_image_map'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_no_image_map',
    'foreign keys' => array(
      'fid' => array(
        'columns' => array(
          'fid' => 'fid',
        ),
        'table' => 'file_managed',
      ),
    ),
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'image',
    'settings' => array(
      'default_image' => 0,
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'image',
  );

  // Exported field_base: 'field_no_logo'
  $field_bases['field_no_logo'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_no_logo',
    'foreign keys' => array(
      'fid' => array(
        'columns' => array(
          'fid' => 'fid',
        ),
        'table' => 'file_managed',
      ),
    ),
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'image',
    'settings' => array(
      'default_image' => 0,
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'image',
  );

  // Exported field_base: 'field_nov2_intro'
  $field_bases['field_nov2_intro'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_nov2_intro',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_nov2_links'
  $field_bases['field_nov2_links'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_nov2_links',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'link',
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'rel' => '',
        'target' => 'default',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
    ),
    'translatable' => 0,
    'type' => 'link_field',
  );

  // Exported field_base: 'field_nov2_principles_left'
  $field_bases['field_nov2_principles_left'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_nov2_principles_left',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_nov2_principles_right'
  $field_bases['field_nov2_principles_right'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_nov2_principles_right',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_population'
  $field_bases['field_population'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_population',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'number_integer',
  );

  // Exported field_base: 'field_program_launched'
  $field_bases['field_program_launched'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_program_launched',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'number_integer',
  );

  // Exported field_base: 'field_schools'
  $field_bases['field_schools'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_schools',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'number_integer',
  );

  // Exported field_base: 'field_spotlights'
  $field_bases['field_spotlights'] = array(
    'active' => 1,
    'cardinality' => 2,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_spotlights',
    'foreign keys' => array(
      'node' => array(
        'columns' => array(
          'target_id' => 'nid',
        ),
        'table' => 'node',
      ),
    ),
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'sort' => array(
          'type' => 'none',
        ),
        'target_bundles' => array(
          'spotlight' => 'spotlight',
        ),
      ),
      'target_type' => 'node',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  // Exported field_base: 'field_teach_page'
  $field_bases['field_teach_page'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_teach_page',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'link',
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'rel' => '',
        'target' => 'default',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
    ),
    'translatable' => 0,
    'type' => 'link_field',
  );

  // Exported field_base: 'field_teachers_active'
  $field_bases['field_teachers_active'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_teachers_active',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'number_integer',
  );

  return $field_bases;
}
